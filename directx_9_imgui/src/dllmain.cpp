#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <thread>
#include <cstdint>

#include "gui.h"
#include "hooks.h"

HMODULE cheat_module = NULL;

void init_cheat(const HMODULE instance)
{
	try
	{
		gui::Setup();
		hooks::Setup();
	}
	catch (const std::exception& error)
	{
		MessageBeep(MB_ICONERROR);
		MessageBox(
			0,
			error.what(),
			"hack error",
			MB_OK | MB_ICONEXCLAMATION
		);

		goto UNLOAD;
	}

	while (!GetAsyncKeyState(VK_END))
		std::this_thread::sleep_for(std::chrono::milliseconds(200));

UNLOAD:
	hooks::Destroy();
	gui::Destroy();
	FreeLibraryAndExitThread(instance, 0);
}

BOOL WINAPI DllMain(HMODULE instance, DWORD reason, LPVOID reserved)
{

    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(instance);

        cheat_module = instance;
        HANDLE thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)init_cheat, instance, 0, nullptr);
        if (!thread)
            return FALSE;

        CloseHandle(thread);
        return TRUE;
    }

    return FALSE;

}