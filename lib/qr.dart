import 'dart:ffi'; // For FFI
import 'dart:io'; // For Platform.isX
import 'package:ffi/ffi.dart';

final DynamicLibrary nativeAddLib = Platform.isAndroid
    ? DynamicLibrary.open("libQrLib.so")
    : DynamicLibrary.process();

// FFI signature of the C function
typedef qr_decode_function = Pointer<Utf8> Function(
    Pointer<Utf8> str, Int32 length);
// Dart type definition for calling the C foreign function
typedef QrDecode = Pointer<Utf8> Function(Pointer<Utf8> str, int length);

// Open the dynamic library
final QrDecode decode = nativeAddLib
    .lookup<NativeFunction<qr_decode_function>>('QRdecoder')
    .asFunction();
