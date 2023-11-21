#pragma once
#include <d3d9.h>

namespace gui
{

	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline LPDIRECT3D9 d3d9 = nullptr;

	bool SetupDirectX() noexcept;
	void DestoryDirectX() noexcept;

	// Windows
	inline HWND window = nullptr;
	inline WNDCLASSEX windowClass = { };
	inline WNDPROC originalWindowProcess = nullptr;

	bool SetupWindowClass(const char* windowClassName) noexcept;
	void DestoryWindowClass() noexcept;

	bool SetupWindow(const char* windowName) noexcept;
	void DestoryWindow() noexcept;

	// Gui
	inline bool open = true;
	inline bool setup = false;

	void Setup();
	void SetupMenu(LPDIRECT3DDEVICE9 device) noexcept;
	void Destroy();
	void Render();

}