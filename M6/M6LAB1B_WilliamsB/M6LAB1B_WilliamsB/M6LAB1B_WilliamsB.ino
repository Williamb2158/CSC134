#include <HCSR04.h>

/*
CSC-134
M6LAB1B - More Arduino
  I was walking around helping so I don't have video of the sensor and variable blink working together
  This is a version of the code that we got working, though.
Brian M. Williams
*/

byte triggerPin = 21;
byte echoPin = 12;

//Sets LED pin to the Built-in LED
const int ledPin = LED_BUILTIN;

//ledState used to set the LED
int ledState = LOW;

//Stores the last time the LED was updated
usigned long previousMillis = 0;


//Variable to store measured distance
double* distances = HCSR04.measureDistanceCm();

//Interval at which to blink
unsigned long interval = 10 * distances;


void setup() {
  Serial.begin(9600);
  HCSR04.begin(triggerPin, echoPin);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= rateMillis) {
    // saves the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off it switches on and vice-versa
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // sets the LED with the ledState of the variable
    digitalWrite(ledPin, ledState);
  }
  Serial.print("1: ");
  Serial.print(distances[0]);
  Serial.println(" cm");

  Serial.println("---");
  delay(50);
}