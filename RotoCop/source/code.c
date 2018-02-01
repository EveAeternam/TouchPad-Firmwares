comment
includes
header

#char* buttons[]={"HW!", "RC", "1","2","COPY","PASTE"};	//CUSTOM

func/setup
func/boot
func/bootins




void loop() {
  
  Point p = ts.getPoint();
  p.x = map(p.x, TS_MINX, TS_MAXX, 0, 240);
  p.y = map(p.y, TS_MINY, TS_MAXY, 0, 320);

    if (p.z > __PRESURE) {
        // Detect  paint brush color change
        if (p.x < HALF_X) {
          //LEFT BUTTONS
          if (p.y < THIRD_Y) {
            Serial.println("1");
            Keyboard.println("Hello World!");
          } else if (p.y > THIRD_Y && p.y < THIRD_Y*2) {
            Serial.println("3");
            Keyboard.print("1");
          } else {
            Serial.println("5");
            hkCopy();
          }
        } else {
          //RIGHT BUTTONS
          if (p.y < THIRD_Y) {
            Serial.println("2");
            Keyboard.println("RotoCop");
          } else if (p.y > THIRD_Y && p.y < THIRD_Y*2) {
            Serial.println("4");
            Keyboard.print("2");
          } else {
            Serial.println("6");
            hkPaste();
          }
        }
    delay(keyPressHold);
    }
}

void hkCopy() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
}

void hkPaste() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  delay(100);
  Keyboard.releaseAll();
}
