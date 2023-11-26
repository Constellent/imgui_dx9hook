#include "Menu.hpp"
#include "../../../Libs/imgui/imgui.h"
#include "../../../Libs/imgui/imgui_impl_win32.h"
#include "../../../Libs/imgui/imgui_impl_dx9.h"

#pragma execution_character_set("utf-8")

void g_nMenu::Render(bool* p_open)
{
	static auto Name = "bese menu";
	static auto Flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoSavedSettings;

	ImGui::SetNextWindowSize(ImVec2(800, 800));
	ImGui::Begin(Name, p_open, Flags);
	ImGui::End();
}