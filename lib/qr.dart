import 'dart:ffi'; // For FFI
import 'dart:io'; // For Platform.isX
import 'package:ffi/ffi.dart';

final DynamicLibrary nativeAddLib = Platform.isAndroid
    ? DynamicLibrary.open("libQrLib.so")
    : DynamicLibrary.process();

 // FFI signature of the hello_world C function
//typedef hello_world_func = Pointer<Utf8> Function();
typedef hello_world_func = Pointer<Utf8> Function(Pointer<Utf8> str, Int32 length);
// Dart type definition for calling the C foreign function
typedef HelloWorld = Pointer<Utf8> Function(Pointer<Utf8> str, int length);



  // Open the dynamic library
  var path = "./libQrLib.so";
  //if (Platform.isMacOS) path = './hello_library/libhello.dylib';
 // if (Platform.isWindows) path = r'hello_library\Debug\hello.dll';
 // final nativeAddLib = DynamicLibrary.open(path);
  // Look up the C function 'hello_world'
  final HelloWorld hello = nativeAddLib
      .lookup<NativeFunction<hello_world_func>>('QRdecoder')
      .asFunction();

// C string parameter pointer function - char reverse(char str, int length);
