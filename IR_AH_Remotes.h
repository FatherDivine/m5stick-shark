struct Remote{
  char* name;
  uint16_t* Raw;
};

#define Name_Remote1 "MSW"

uint16_t Raw10[] = {367, 2081, 357, 2056, 333, 2079, 333, 880, 333, 880, 334, 880, 333, 2079, 334, 880, 334, 879, 334, 2078, 334, 879, 334, 880, 334, 879, 335, 879, 334, 880, 334, 880, 333, 28199, 335, 2082, 333, 2080, 332, 2081, 332, 907, 332, 882, 331, 883, 331, 2082, 330, 884, 329, 885, 329, 2084, 328, 886, 328, 885, 328, 886, 328, 885, 329, 886, 328, 886, 328, 28204, 329, 2086, 328, 2085, 328, 2085, 328, 886, 328, 885, 329, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 328, 2086, 328, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 329, 2086, 328, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 328, 2086, 328, 2085, 327, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328};
Remote Remote10 = {"on", Raw10};

uint16_t Raw11[] = {364, 2080, 334, 2079, 334, 2078, 390, 824, 444, 769, 391, 823, 391, 2023, 390, 824, 390, 2022, 391, 823, 391, 850, 391, 2022, 307, 2106, 307, 906, 308, 906, 308, 906, 308, 25786, 332, 2107, 307, 2106, 307, 2107, 305, 908, 305, 909, 304, 910, 304, 2109, 304, 911, 328, 2085, 328, 885, 329, 885, 329, 2084, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 25787, 304, 2111, 328, 2085, 329, 2085, 328, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 329, 2084, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 25786, 328, 2086, 328, 2085, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 329, 2084, 328, 2084, 329, 885, 329, 885, 329, 885, 329, 25786, 329, 2085, 329, 2085, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 2085, 328, 885, 328, 886, 328, 2084, 329, 2084, 329, 885, 329, 886, 328, 885, 329, 25788, 328, 2086, 328, 2085, 328, 2084, 329, 885, 329, 885, 329, 885, 329, 2085, 328, 885, 329, 2084, 329, 885, 329, 885, 329, 2084, 329, 2085, 328, 885, 329, 885, 329, 885, 329, 25789, 329, 2085, 329, 2084, 329, 2084, 329, 885, 329, 885, 329, 885, 328, 2085, 328, 885, 329, 2085, 328, 885, 329, 885, 329, 2085, 328, 2085, 328, 885, 329, 886, 328, 885, 329, 25787, 329, 2085, 329, 2084, 329, 2085, 328, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 2085, 328, 885, 329, 885, 329, 2084, 329, 2084, 329, 885, 328, 885, 329, 885, 328, 25786, 329, 2085, 329, 2084, 329, 2084, 328, 885, 329, 885, 329, 885, 329, 2084, 328, 885, 329, 2084, 329, 885, 328, 885, 329, 2084, 328, 2085, 328, 885, 329, 885, 329, 885, 328, 25783, 329, 2086, 329, 2084, 329, 2085, 328, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 329, 2084, 329, 2084, 329, 885, 328, 885, 329, 885, 329, 25784, 329, 2086, 328, 2085, 328, 2084, 329, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 329, 2084, 329, 2084, 329, 885, 328, 885, 329, 885, 328, 25785, 329, 2085, 329, 2084, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 2085, 328, 885, 329, 885, 329, 2084, 328, 2085, 328, 885, 329, 885, 329, 885, 329, 25785, 328, 2085, 329, 2085, 328, 2084, 329, 885, 329, 885, 328, 885, 329, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 329, 2084, 329, 2084, 329, 885, 328, 885, 329, 885, 329, 25786, 329, 2085, 329, 2084, 329, 2085, 328, 885, 329, 885, 329, 885, 328, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 328, 2084, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 25785, 329, 2085, 329, 2084, 329, 2084, 329, 885, 329, 885, 328, 885, 329, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 329, 2084, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 25786, 304, 2111, 303, 2109, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 329, 2084, 329, 2084, 329, 885, 329, 886, 328, 885, 329, 25814, 304, 2111, 329, 2084, 329, 2085, 327, 886, 328, 886, 328, 887, 327, 2110, 277, 936, 303, 2110, 278, 936, 303, 911, 302, 2110, 303, 2111, 302, 912, 276, 937, 277, 937, 277};
Remote Remote11 = {"off", Raw11};

uint16_t Raw12[] = {363, 2078, 336, 2078, 335, 2078, 335, 879, 387, 827, 389, 824, 390, 2023, 390, 823, 391, 823, 391, 850, 363, 2050, 308, 2079, 334, 880, 334, 2079, 334, 880, 334, 881, 332, 25782, 358, 2082, 332, 2081, 332, 2082, 330, 883, 330, 884, 330, 885, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 2085, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 25786, 328, 2086, 328, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 2085, 328, 886, 328, 2085, 328, 886, 328, 886, 327, 25783, 329, 2085, 329, 2084, 328, 2084, 329, 885, 328, 885, 329, 885, 329, 2084, 328, 885, 328, 885, 329, 885, 328, 2084, 328, 2084, 329, 885, 329, 2084, 329, 885, 328, 885, 328, 25784, 328, 2085, 329, 2084, 329, 2084, 329, 885, 329, 885, 329, 885, 329, 2084, 329, 885, 329, 885, 329, 885, 328, 2085, 328, 2084, 329, 885, 329, 2084, 329, 885, 329, 885, 329};
Remote Remote12 = {"Foto", Raw12};

uint16_t Raw13[] = {336, 2079, 336, 2078, 335, 2078, 335, 879, 335, 905, 309, 906, 308, 2105, 309, 905, 309, 906, 308, 2105, 308, 2106, 308, 2105, 308, 906, 308, 2105, 308, 906, 307, 906, 307, 24621, 307, 2107, 307, 2106, 306, 2107, 306, 909, 305, 909, 305, 910, 329, 2084, 329, 885, 329, 885, 329, 2085, 328, 2085, 328, 2085, 328, 885, 329, 2085, 328, 886, 328, 886, 328, 24598, 303, 2112, 328, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 885, 329, 886, 328, 2085, 328, 2085, 328, 2085, 328, 885, 329, 2084, 329, 885, 329, 885, 329, 24596, 304, 2111, 304, 2110, 328, 2085, 328, 886, 328, 885, 329, 886, 328, 2086, 326, 886, 328, 887, 327, 2109, 303, 2110, 303, 2110, 302, 911, 277, 2136, 277, 936, 302, 912, 302, 24594, 327, 2087, 302, 2135, 277, 2135, 278, 936, 277, 936, 278, 936, 278, 2135, 278, 936, 278, 936, 278, 2136, 277, 2136, 277, 2136, 277, 937, 277, 2136, 277, 937, 277, 937, 277, 24622, 303, 2110, 304, 2109, 304, 2109, 304, 910, 304, 910, 304, 910, 304, 2109, 304, 910, 304, 910, 304, 2109, 304, 2109, 304, 2110, 303, 910, 304, 2110, 303, 911, 303, 911, 303};
Remote Remote13 = {"freeze", Raw12};

uint16_t Raw14[] = {364, 2080, 334, 2079, 334, 2079, 334, 880, 333, 879, 334, 880, 333, 2078, 335, 879, 334, 879, 334, 879, 334, 2079, 333, 2080, 332, 2080, 333, 881, 332, 883, 330, 908, 330, 25789, 331, 2083, 330, 2083, 329, 2083, 329, 885, 328, 886, 327, 886, 328, 2086, 327, 887, 327, 887, 327, 887, 327, 2085, 327, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 25788, 328, 2086, 327, 2085, 328, 2085, 327, 886, 328, 886, 328, 886, 327, 2085, 327, 886, 328, 886, 327, 886, 328, 2086, 327, 2086, 327, 2086, 327, 887, 327, 887, 326, 887, 327, 25787, 327, 2087, 327, 2086, 327, 2085, 327, 887, 327, 887, 327, 887, 327, 2085, 327, 886, 328, 886, 327, 886, 327, 2086, 327, 2085, 328, 2085, 327, 886, 327, 886, 328, 886, 327};
Remote Remote14 = {"mute", Raw12};

uint16_t Raw15[] = {337, 2108, 306, 2078, 335, 2078, 335, 908, 306, 907, 307, 907, 306, 2107, 305, 908, 306, 908, 306, 2107, 306, 907, 306, 907, 307, 907, 307, 2106, 306, 907, 306, 907, 306, 27002, 306, 2107, 306, 2106, 306, 2107, 305, 909, 304, 909, 304, 910, 303, 2110, 328, 886, 328, 887, 327, 2086, 327, 887, 326, 887, 327, 887, 327, 2086, 327, 887, 327, 887, 327, 26979, 327, 2087, 327, 2086, 327, 2086, 327, 887, 327, 887, 327, 887, 327, 2086, 326, 887, 327, 887, 327, 2086, 327, 887, 326, 887, 327, 887, 326, 2086, 327, 887, 327, 887, 327, 26981, 328, 2087, 327, 2086, 327, 2086, 327, 887, 327, 887, 327, 887, 327, 2086, 327, 886, 328, 887, 327, 2086, 327, 887, 327, 887, 327, 886, 328, 2086, 326, 887, 326, 887, 327, 26980, 328, 2087, 327, 2086, 327, 2086, 327, 887, 327, 887, 327, 887, 327, 2086, 327, 887, 327, 887, 326, 2086, 327, 887, 327, 887, 327, 887, 327, 2086, 327, 887, 327, 887, 327};
Remote Remote15 = {"Vup", Raw12};

uint16_t Raw16[] = {364, 2082, 332, 2080, 332, 2080, 333, 881, 333, 881, 333, 881, 333, 2080, 333, 880, 333, 881, 333, 2079, 333, 880, 333, 2080, 333, 880, 333, 2080, 333, 881, 333, 882, 331, 25786, 333, 2084, 330, 2084, 354, 2082, 330, 884, 329, 884, 329, 885, 328, 2085, 328, 886, 327, 887, 327, 2086, 327, 887, 327, 2087, 326, 887, 327, 2087, 326, 887, 327, 887, 327, 25794, 327, 2088, 327, 2087, 326, 2087, 327, 887, 327, 887, 327, 887, 327, 2087, 326, 888, 326, 887, 327, 2087, 327, 887, 327, 2087, 327, 887, 327, 2087, 326, 888, 326, 887, 327, 25795, 327, 2088, 327, 2087, 326, 2086, 327, 887, 327, 887, 327, 887, 327, 2086, 327, 887, 327, 887, 327, 2087, 326, 887, 327, 2087, 326, 887, 327, 2087, 326, 887, 327, 888, 326};
Remote Remote16 = {"Vdown", Raw12};

uint16_t Raw17[] = {363, 2080, 357, 2056, 334, 2078, 335, 878, 335, 879, 335, 879, 334, 2079, 334, 879, 335, 879, 334, 2079, 334, 881, 332, 2079, 334, 2080, 333, 2080, 333, 884, 329, 907, 306, 24609, 354, 2084, 331, 2082, 330, 2083, 328, 885, 329, 885, 328, 886, 327, 2086, 327, 886, 328, 886, 328, 2085, 328, 886, 328, 2085, 328, 2085, 328, 2085, 328, 886, 328, 886, 327, 24611, 327, 2087, 327, 2086, 327, 2086, 327, 887, 327, 886, 328, 886, 328, 2086, 327, 886, 328, 887, 327, 2086, 327, 886, 328, 2086, 327, 2086, 327, 2086, 327, 887, 327, 887, 327, 24615, 326, 2089, 326, 2087, 325, 2111, 301, 912, 302, 912, 302, 912, 301, 2112, 276, 938, 301, 912, 302, 2112, 300, 914, 300, 2113, 301, 2112, 301, 2112, 301, 913, 301, 913, 301};
Remote Remote17 = {"Home", Raw12};

Remote Remote1[] ={Remote10, Remote11, Remote12, Remote13, Remote14, Remote15, Remote16, Remote17};

//commands  https://www.remotecentral.com/cgi-bin/codes/samsung/tv_functions/
//Hex to deximal   https://www.atatus.com/tools/hex-to-decimal
#define Name_Remote2 "Samsung"

uint16_t Raw20[] = {0, 109, 34, 3, 169, 168, 21, 63, 21, 63, 21, 63, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 63, 21, 63, 21, 63, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 63, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 64, 21, 21, 21, 63, 21, 63, 21, 63, 21, 63, 21, 63, 21, 63, 21, 1794, 169, 168, 21, 21, 21, 3694};
Remote Remote20 = {"Power", Raw20};

uint16_t Raw21[] = {367, 2081, 357, 2056, 333, 2079, 333, 880, 333, 880, 334, 880, 333, 2079, 334, 880, 334, 879, 334, 2078, 334, 879, 334, 880, 334, 879, 335, 879, 334, 880, 334, 880, 333, 28199, 335, 2082, 333, 2080, 332, 2081, 332, 907, 332, 882, 331, 883, 331, 2082, 330, 884, 329, 885, 329, 2084, 328, 886, 328, 885, 328, 886, 328, 885, 329, 886, 328, 886, 328, 28204, 329, 2086, 328, 2085, 328, 2085, 328, 886, 328, 885, 329, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 328, 2086, 328, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 329, 2086, 328, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 328, 2086, 328, 2085, 327, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328};
Remote Remote21 = {"off", Raw21};

uint16_t Raw22[] = {367, 2081, 357, 2056, 333, 2079, 333, 880, 333, 880, 334, 880, 333, 2079, 334, 880, 334, 879, 334, 2078, 334, 879, 334, 880, 334, 879, 335, 879, 334, 880, 334, 880, 333, 28199, 335, 2082, 333, 2080, 332, 2081, 332, 907, 332, 882, 331, 883, 331, 2082, 330, 884, 329, 885, 329, 2084, 328, 886, 328, 885, 328, 886, 328, 885, 329, 886, 328, 886, 328, 28204, 329, 2086, 328, 2085, 328, 2085, 328, 886, 328, 885, 329, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 328, 2086, 328, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 329, 2086, 328, 2085, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 28207, 328, 2086, 328, 2085, 327, 2085, 328, 886, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 2085, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328, 886, 328};
Remote Remote22 = {"MSW", Raw22};

Remote Remote2[] ={Remote20, Remote21, Remote22};


//#define Allremotes {Remote1, Remote2} 
//#define Allremotes Remote Allremotes[] = {Remote1, Remote2}
Remote *Allremotes[] = {Remote1, Remote2};


#define STICK_C_PLUS2
#define DISP M5.Lcd
#define M5_BUTTON_MENU 35
#define M5_BUTTON_HOME 37
#define M5_BUTTON_RST 39
uint8_t cursorr=0;
uint8_t Remutenum=0;
int size=0;
void drawRemotemenue(void) {
  DISP.setTextSize(SMALL_TEXT);
  DISP.fillScreen(BGCOLOR);
  DISP.setCursor(0, 0, 1);
  // scrolling menu
  if (cursorr < 0) {
    cursorr = size - 1;  // rollover hack for up-arrow on cardputer
  }
  if (cursorr > 5) {
    for ( int i = 0 + (cursorr - 5) ; i < size ; i++ ) {
      if(cursorr == i){
        DISP.setTextColor(BGCOLOR, FGCOLOR);
      }
      if (i)
      {
      DISP.printf(" %-19s\n", Allremotes[Remutenum][i-1].name);
      DISP.setTextColor(FGCOLOR, BGCOLOR);
      }
      else
      {
      DISP.printf(" %-19s\n", "Back");
      DISP.setTextColor(FGCOLOR, BGCOLOR);
      }
    }
  } else {
    for (
      int i = 0 ; i < size ; i++ ) {
      if(cursorr == i){
        DISP.setTextColor(BGCOLOR, FGCOLOR);
      }
      if (i)
      {
      DISP.printf(" %-19s\n", Allremotes[Remutenum][i-1].name);
      DISP.setTextColor(FGCOLOR, BGCOLOR);
      }
      else
      {
      DISP.printf(" %-19s\n", "Back");
      DISP.setTextColor(FGCOLOR, BGCOLOR);
      }
    }
  }
  //time
  DISP.setCursor(191, 16, 1);
#if defined(STICK_C_PLUS2)
      auto dt = StickCP2.Rtc.getDateTime();
      DISP.printf("%02d:%02d\n", dt.time.hours, dt.time.minutes);
#else
      M5.Rtc.GetBm8563Time();
      DISP.printf("%02d:%02d\n", M5.Rtc.Hour, M5.Rtc.Minute);
#endif
  //Baterie
  DISP.setCursor(191, 16, 1);
  DISP.print(M5.Power.getBatteryLevel());
  DISP.print("%");
}
void Remotemenue(uint8_t num)
{
  Remutenum=num;
  size = 8;//sizeof(Allremotes[Remutenum]);
  Serial.println(size);
  DISP.fillScreen(BGCOLOR);
  cursorr = 0;
  rstOverride = true;
  delay(10);
  drawRemotemenue();
  while (1)
  {
  if (digitalRead(M5_BUTTON_RST) == LOW) {
    cursorr++;
    cursorr = cursorr % size;
    drawRemotemenue();
    delay(250);
  }
  uint8_t corsorbuf=cursorr;
  if (digitalRead(M5_BUTTON_HOME) == LOW){
    if(cursorr)
    {
      while(digitalRead(M5_BUTTON_HOME) == LOW)
      {
        TransmitIR(Allremotes[Remutenum][cursorr-1].Raw);
      }
    }
    else
    {
      rstOverride = false;
      isSwitching = true;
      break;
    }
    cursorr=corsorbuf;
    //current_proc = IRAHmenu[cursorr].command;
  }
  }
}

