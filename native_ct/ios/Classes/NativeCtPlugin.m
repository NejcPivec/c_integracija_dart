#import "NativeCtPlugin.h"
#if __has_include(<native_ct/native_ct-Swift.h>)
#import <native_ct/native_ct-Swift.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "native_ct-Swift.h"
#endif

@implementation NativeCtPlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  [SwiftNativeCtPlugin registerWithRegistrar:registrar];
}
@end
