/* Include the LedControl library */ 
#include "LedControl.h"

/* Create a new LedControl variable.
 * We use pins 12,11 and 10 on the Arduino for the SPI interface
 * Pin 12 is connected to the DATA IN-pin of the first MAX7221
 * Pin 11 is connected to the CLK-pin of the first MAX7221
 * Pin 10 is connected to the LOAD(/CS)-pin of the first MAX7221
 * There will only be a single MAX7221 attached to the arduino 
 */  
LedControl lc = LedControl(12,11,10,1);

/* we always wait a bit between updates of the display */
unsigned long delaytime=220;

/* 
 * Set the shutdown (power saving) mode for the device
 * Params :
 *   addr   The address of the display to control
 *   status If true the device goes into power-down mode. Set to false
 *          for normal operation.
 */
 void shutdown(int addr, bool status);

/* Set the number of digits (or rows) to be displayed.
 * See datasheet for side effects of the scanlimit on the brightness
 * of the display.
 * Params :
 *   addr     The address of the display to control
 *   limit    The number of digits to be displayed
 */ 
void setScanLimit(int addr, int limit);

/* Set the brightness of the display.
 * Params:
 *   addr the address of the display to control
 *   intensity the brightness of the display.
 */
void setIntensity(int addr, int intensity);

void setup() {
  lc.shutdown(0,false);

  lc.setIntensity(0,8);

  lc.clearDisplay(0);

}

void michaelMyers() {
 // Data for characters
 // EX: byte a[5]={B01111110,B10001000,B10001000,B10001000,B01111110};
  byte M[8]={B00000000,B00000000,B01100110,B10011001,B10000001,B10000001,B10000001,B00000000};
  byte I[8]={B00000000,B01111110,B00011000,B00011000,B00011000,B00011000,B01111110,B00000000};
  byte C[8]={B00000000,B00111110,B01000000,B10000000,B10000000,B01000000,B00111110,B00000000};
  byte H[8]={B00000000,B00000000,B01000010,B01000010,B01111110,B01000010,B01000010,B00000000};
  byte A[8]={B00000000,B00111100,B01100110,B01100110,B01111110,B01100110,B01100110,B01100110};
  byte E[8]={B00000000,B11111110,B11000000,B11100000,B11100000,B11000000,B11111110,B00000000};
  byte L[8]={B00000000,B01000000,B01000000,B01000000,B01000000,B01000000,B01111110,B00000000};
  byte Y[8]={B00000000,B11000011,B01100110,B00011000,B00011000,B00011000,B00011000,B00000000};
  byte R[8]={B00000000,B01111000,B01100100,B01100100,B01111000,B01100100,B01100110,B00000000};
  byte S[8]={B00000000,B01111110,B01100000,B01101110,B01110110,B00000110,B01111110,B00000000};

 // Display them with a delay
  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,M[i]);
  }

  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,I[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,C[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,H[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,A[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,E[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,L[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,M[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,Y[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,E[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,R[i]);
  }
  
  delay(delaytime);

  for (int i=0; i < 8; i++)
  {
    lc.setRow(0,i,S[i]);
  }
  
  delay(delaytime);

}

void loop() {
  //michaelMyers();

}
