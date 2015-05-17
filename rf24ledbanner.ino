#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <AcceleroMMA7361.h>

// NB: This sketch assumes 32 bit addresses

static long int address = 0x66996699L;  // So that's 0x0066996699
const int tries = 10;

RF24 rf(/*ce*/ 8, /*cs*/ 10);

void setup() {
    pinMode(7, OUTPUT);
    digitalWrite(7, HIGH);
    rf.begin();
    rf.setRetries(15, 15);
    rf.enableDynamicPayloads();
    rf.openWritingPipe(address);

    pinMode(3, INPUT);
    digitalWrite(3, HIGH);
    pinMode(5, INPUT);
    digitalWrite(5, HIGH);


    Serial.begin(115200);
    Serial.println("---");

    char buf[7] = "\x05LEDB\0";
    buf[5] = digitalRead(5) ? '0' : '1';
    Serial.println(buf[5]);
    Serial.println(rf.isPVariant());

    for (int i = 0; i < tries; i++)
        rf.write(&buf, 6);

    Serial.println(buf[5]);
}

void loop() {
          
    delay(10);

}





// vim: ft=cpp
