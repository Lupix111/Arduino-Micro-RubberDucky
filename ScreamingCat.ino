#include <Keyboard.h>

void setup() {
Keyboard.begin(KeyboardLayout_it_IT);
delay(7000);

/*
Keyboard.write(KEY_LEFT_GUI);
delay(250);
Keyboard.print("esegui");
*/

Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();

delay(350);
Keyboard.write(KEY_RETURN);
delay(350);
Keyboard.write(KEY_BACKSPACE);
Keyboard.print("https://www.youtube.com/watch?v=dT15iRbUEJA");
Keyboard.write(KEY_RETURN);


}

void loop() {
  
}
