#pragma comment(linker, "/subsystem:windows")

#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow) {
  ChangeWindowMode(true);

  if (DxLib_Init() == -1) {
    return -1;
  }

  printfDx("Hello, world!\n");

  WaitKey();

  DxLib_End();

  return 0;
}
