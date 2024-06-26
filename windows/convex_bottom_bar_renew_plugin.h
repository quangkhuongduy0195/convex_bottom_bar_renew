#ifndef FLUTTER_PLUGIN_CONVEX_BOTTOM_BAR_RENEW_PLUGIN_H_
#define FLUTTER_PLUGIN_CONVEX_BOTTOM_BAR_RENEW_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace convex_bottom_bar_renew {

class ConvexBottomBarRenewPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  ConvexBottomBarRenewPlugin();

  virtual ~ConvexBottomBarRenewPlugin();

  // Disallow copy and assign.
  ConvexBottomBarRenewPlugin(const ConvexBottomBarRenewPlugin&) = delete;
  ConvexBottomBarRenewPlugin& operator=(const ConvexBottomBarRenewPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace convex_bottom_bar_renew

#endif  // FLUTTER_PLUGIN_CONVEX_BOTTOM_BAR_RENEW_PLUGIN_H_
