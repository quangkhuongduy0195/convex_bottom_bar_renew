#include "include/convex_bottom_bar_renew/convex_bottom_bar_renew_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "convex_bottom_bar_renew_plugin.h"

void ConvexBottomBarRenewPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  convex_bottom_bar_renew::ConvexBottomBarRenewPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
