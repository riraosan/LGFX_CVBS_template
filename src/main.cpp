
#include <M5GFX.h>
#include <LGFX_8BIT_CVBS.h>
#include <Connect.h>
static LGFX_8BIT_CVBS display;
Connect               wifi;

void showConnectState(String message, int color) {
  display.fillScreen(color);
  display.setCursor(0, 0);
  display.println(message);
}

void setup() {
  display.init();

  showConnectState("Connecting...", TFT_RED);
  wifi.begin();
  showConnectState("Connected!", TFT_GREEN);
}

void loop() {
  wifi.update();
}
