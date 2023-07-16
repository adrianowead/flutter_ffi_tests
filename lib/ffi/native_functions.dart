import 'dart:ffi' as ffi;
import 'package:ffi/ffi.dart' as ffip;

typedef CPlayAudio = ffi.Void Function(ffi.Pointer<ffip.Utf8> path);
typedef DartPlayAudio = void Function(ffi.Pointer<ffip.Utf8> path);

class NativeFunctions {
  final urnaLib = ffi.DynamicLibrary.open("assets/dylibs/win32/urna.dll");

  void playSound(String path) {
    final playAudio =
        urnaLib.lookupFunction<CPlayAudio, DartPlayAudio>('playAudio');

    playAudio(path.toNativeUtf8());
  }
}
