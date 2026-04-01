
// ****************************************************************************
// *                                                                          *
// *              Projekt: LICHTSCHRANKE                                      *
// *                                                                          *
// *                                                                          *
// ****************************************************************************

#include <Arduino.h>

#define TRANSMITTER 3
#define RECIEVER 2

void setup()
{
    Serial.begin(115200); // Baudrate
    Serial.println("..Start..\n");
    pinMode(RECIEVER, INPUT);
    analogWrite(TRANSMITTER, 128);
}

void loop()
{
}
