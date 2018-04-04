#include <Keyboard.h>

void setup(){
  Keyboard.begin();
  
  delay(3000);
  keydump(33,126);
  delay(5000);
  keydump(136,175);
  keydump(181,192);
  keydump(220,223);
  keydump(225,236);
  keydump(238,255);
  Keyboard.print('\n');
  Keyboard.print('\n');
  Keyboard.print("Modifier key values:\n");
  Keyboard.print("KEY_LEFT_CTRL 0x80\n");
  Keyboard.print("KEY_LEFT_SHIFT 0x81\n");
  Keyboard.print("KEY_LEFT_ALT 0x82\n");
  Keyboard.print("KEY_LEFT_GUI 0x83\n");
  Keyboard.print("KEY_RIGHT_CTRL 0x84\n");
  Keyboard.print("KEY_RIGHT_SHIFT 0x85\n");
  Keyboard.print("KEY_RIGHT_ALT 0x86\n");
  Keyboard.print("KEY_RIGHT_GUI 0x87\n");

  

  Keyboard.end();
}

void keydump (int start_pos, int end_pos) {
  for ( int i=start_pos; i <= end_pos; i++ ) {
    Keyboard.print(i, HEX);
    Keyboard.print(" ");
    delay(10);
    Keyboard.write(i);
    delay(10);
    Keyboard.print(" ");
    delay(10);
  }
}


void loop(){}
