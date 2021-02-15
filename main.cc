#define WEBVIEW_IMPLEMENTATION
#include "webview.h"

#ifdef WIN32
int WINAPI WinMain(HINSTANCE hInt, HINSTANCE hPrevInst, LPSTR lpCmdLine,
                   int nCmdShow) {
#else
int main() {
#endif
  /* Open wikipedia in a 800x600 resizable window */
  webview("Minimal webview example",
	  "https://www.google.com/search?q=what+is+my+user+agent&oq=what+is+my+usergent", 800, 600, 1);
  return 0;
} 