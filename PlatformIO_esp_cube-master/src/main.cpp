
#include <Arduino.h>
#include <bounce2.h>
#include <time.h>
#include <stdlib.h>
#include "kostka.hpp"
#define a 2
#define b 14
#define c 12
#define d 0
#define e 4
#define f 5
#define g 16
#define button 13
Bounce debouncer = Bounce();
Kostka kostka = Kostka(a,b,c,d,e,f,g);
void setup() {
    pinMode(13,INPUT_PULLUP);
    pinMode(a,OUTPUT);
    pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
    pinMode(d,OUTPUT);
    pinMode(e,OUTPUT);
    pinMode(f,OUTPUT);
    pinMode(g,OUTPUT);

    debouncer.attach(button);
    debouncer.interval(5); // interval in ms
    srand (time(NULL));
}

// the loop function runs over and over again forever
void loop() {
  debouncer.update();
  // Get the updated value :
  int value = debouncer.read();
  // Turn on or off the LED as determined by the state :
  if ( value == LOW ) {
    int random = rand()%6+1;
    switch(random){
      case 1:
        kostka.one();
        break;
      case 2:
        kostka.two();
        break;
      case 3:
        kostka.three();
        break;
      case 4:
        kostka.four();
        break;
      case 5:
        kostka.five();
        break;
      case 6:
        kostka.six();
        break;
    }
  }
}