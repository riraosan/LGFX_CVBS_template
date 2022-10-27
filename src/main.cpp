
#include <M5GFX.h>
#include <LGFX_8BIT_CVBS.h>

static LGFX_8BIT_CVBS display;

void setup() {
  display.init();
  display.print("Hello World");
  display.fillScreen(TFT_GREEN);
}

void loop() {
}
