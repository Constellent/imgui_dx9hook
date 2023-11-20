#include "Menu.hpp"
#include "../../../Libs/imgui/imgui.h"
#include "../../../Libs/imgui/imgui_impl_win32.h"
#include "../../../Libs/imgui/imgui_impl_dx9.h"

#pragma execution_character_set("utf-8")

void g_nMenu::Render(bool* p_open)
{
	ImGui::SetNextWindowSize(ImVec2(800, 800));
	ImGui::Begin("Constellent.cc | CS:GO 2k18 Cheat", nullptr, ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoNav | ImGuiWindowFlags_NoScrollbar);
	ImGui::End();
}