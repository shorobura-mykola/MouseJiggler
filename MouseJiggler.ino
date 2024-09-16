#include <Mouse.h>

void setup() {
  Mouse.begin();
}

void loop() {
  tinyJiggle();
}

void tinyJiggle() {
  byte shift = 2;
  byte wait = 250;

  Mouse.move(shift, -shift, 0);
  delay(wait);
  
  Mouse.move(shift, shift, 0);
  delay(wait);
  
  Mouse.move(-shift, shift, 0);
  delay(wait);
  
  Mouse.move(-shift, -shift, 0);
  delay(wait);
}

void jiggleInCircle() {
  int shift = 100; 
  int wait = 2;

  // First loop of the infinity sign (right loop)
  Mouse.move(shift, -shift, 0);  // Move right and up
  delay(wait);
  
  Mouse.move(shift, shift, 0);  // Move right and down
  delay(wait);

  Mouse.move(-shift, shift, 0);  // Move left and down
  delay(wait);
  
  Mouse.move(-shift, -shift, 0);  // Move left and up
  delay(wait);

  // Second loop of the infinity sign (left loop)
  Mouse.move(-shift, -shift, 0);  // Move left and up
  delay(wait);
  
  Mouse.move(-shift, shift, 0);  // Move left and down
  delay(wait);

  Mouse.move(shift, shift, 0);  // Move right and down
  delay(wait);
  
  Mouse.move(shift, -shift, 0);  // Move right and up
  delay(wait);

  // Return to the center
  Mouse.move(0, 0, 0);  // Move to the center (optional, but included for clarity)
}
