#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow) {
  MessageBox(NULL, lpCmdLine, "Alert", MB_OK | MB_ICONEXCLAMATION);
  return 0;
}
