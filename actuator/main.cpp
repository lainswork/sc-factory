#include <Windows.h>
#include <iostream>
auto __init__ = []() {
  LoadLibraryA("user32.dll");
  LoadLibraryA("d3d11.dll");
  LoadLibraryA("dxgi.dll");
  LoadLibraryA("win32u.dll");
  LoadLibraryA("gdi32.dll");
  LoadLibraryA("msvcrt.dll");
  LoadLibraryA("ntdll.dll");
  std::printf("__init__\n");
  return true;
}();

int main() {
  std::printf("hello world\n");
  return 0;
}