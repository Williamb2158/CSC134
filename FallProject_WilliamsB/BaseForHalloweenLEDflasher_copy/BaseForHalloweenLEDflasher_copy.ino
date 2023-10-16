//Define the pin to which the LED is connected
const int ledPin = LED_BUILTIN;

//Define the tempo in BPM
const int tempoBPM = 136;

//Calculate the interval in milliseconds based on the tempo
const unsigned long interval = 30000 / tempoBPM; // 60,000 ms in a minute- double the rate to flash on each beat not onoff cycle on each beat

//Variables to store the last time the LED was toggled
unsigned long previousMillis = 0;


void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
 // Get the current time
  unsigned long currentMillis = millis();

  // Check if it's time to toggle the LED
    if (currentMillis - previousMillis >= interval)
    {
      previousMillis = currentMillis;

        if (digitalRead(ledPin) == LOW)
        {
          digitalWrite(ledPin, HIGH);
        }
        else
        {
            digitalWrite(ledPin, LOW);
        }
    }





}
