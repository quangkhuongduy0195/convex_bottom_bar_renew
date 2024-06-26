//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <convex_bottom_bar_renew/convex_bottom_bar_renew_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) convex_bottom_bar_renew_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "ConvexBottomBarRenewPlugin");
  convex_bottom_bar_renew_plugin_register_with_registrar(convex_bottom_bar_renew_registrar);
}
