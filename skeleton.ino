#include <TFT_eSPI.h> 
#include <SPI.h>
#define TFT_GREY 0x5AEB

TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  tft.init();
  tft.setRotation(1);   // 1 = landscape, 2 = portrait
  tft.fillScreen(TFT_GREY);
}

void loop() {
  concentricRects();
  
}

void concentricRects(){
  
  uint16_t gray = TFT_GREY;
  uint16_t fgcolor = TFT_WHITE;
  uint16_t bgcolor = TFT_BLUE;
  uint16_t color = TFT_GREEN;
  uint16_t black = TFT_BLACK;
  int16_t open = 0;

  for (int16_t x = 0; x < tft.width(); x += 10) {

    if (open % 2 == 0) {
      // top of skull
      tft.fillCircle(tft.width() / 2 - 4, (tft.height() / 2) + 10, 30, color);
      tft.fillRect(tft.width() / 2 - 24, (tft.height() / 2) - 25, 40, 20, color);
      tft.fillCircle(tft.width() / 2, (tft.height() / 2) + 10, 30, fgcolor);
      tft.fillRect(tft.width() / 2 - 20, (tft.height() / 2) - 25, 40, 15, fgcolor);

        // open mouth

      // begin --- area to move
      // jaw
      tft.fillRect(tft.width() / 2 - 20, (tft.height() / 2) - 40, 40, 10, fgcolor);

      // teeth
      tft.fillRect(tft.width() / 2 + 8, (tft.height() / 2) - 40, 5, 10, black);
      tft.fillRect(tft.width() / 2 - 2, (tft.height() / 2) - 40, 5, 10, black);
      tft.fillRect(tft.width() / 2 - 12, (tft.height() / 2) - 40, 5, 10, black);
      tft.fillRect(tft.width() / 2 - 20, (tft.height() / 2) - 30, 40, 10, gray);
      

      // end --- area to move

      // eyes
      tft.fillCircle(tft.width() / 2 + 12, (tft.height() / 2) + 10, 10, color);
      tft.fillCircle(tft.width() / 2 + 16, (tft.height() / 2) + 10, 10, black);

      tft.fillCircle(tft.width() / 2 - 16, (tft.height() / 2) + 10, 10, color);
      tft.fillCircle(tft.width() / 2 - 12, (tft.height() / 2) + 10, 10, black);
      delay(800);

    } else {
      // top of skull
      tft.fillCircle(tft.width() / 2 - 4, (tft.height() / 2) + 10, 30, color);
      tft.fillRect(tft.width() / 2 - 24, (tft.height() / 2) - 25, 40, 15, color);
      tft.fillCircle(tft.width() / 2, (tft.height() / 2) + 10, 30, fgcolor);
      tft.fillRect(tft.width() / 2 - 20, (tft.height() / 2) - 25, 40, 15, fgcolor);
      // close mouth

      // begin --- area to move
      // jaw
      tft.fillRect(tft.width() / 2 - 20, (tft.height() / 2) - 35, 40, 15, fgcolor);

      // teeth
      tft.fillRect(tft.width() / 2 + 8, (tft.height() / 2) - 35, 5, 10, black);
      tft.fillRect(tft.width() / 2 - 2, (tft.height() / 2) - 35, 5, 10, black);
      tft.fillRect(tft.width() / 2 - 12, (tft.height() / 2) - 35, 5, 10, black);
      tft.fillRect(tft.width() / 2 - 20, (tft.height() / 2) - 45, 45, 10, gray);
          
      // end --- area to move

      // eyes
      tft.fillCircle(tft.width() / 2 + 12, (tft.height() / 2) + 10, 10, color);
      tft.fillCircle(tft.width() / 2 + 16, (tft.height() / 2) + 10, 10, black);

      tft.fillCircle(tft.width() / 2 - 16, (tft.height() / 2) + 10, 10, color);
      tft.fillCircle(tft.width() / 2 - 12, (tft.height() / 2) + 10, 10, black);
      delay(800);
    }
    open++;

  }
}
