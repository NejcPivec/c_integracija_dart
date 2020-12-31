
import 'dart:async';

import 'package:flutter/services.dart';

class NativeCt {
  static const MethodChannel _channel =
      const MethodChannel('native_ct');

  static Future<String> get platformVersion async {
    final String version = await _channel.invokeMethod('getPlatformVersion');
    return version;
  }
}
