#include <wiringPi.h>
#include <stdio.h>

#define IR_PIN 4

int main() {
    wiringPiSetup();
    pinMode(IR_PIN, INPUT);

    while (1) {
        if (digitalRead(IR_PIN) == LOW)
            printf("Object Detected\n");
        else
            printf("No Object\n");

        delay(500);
    }
}
