#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 11);
// Arduino RX = 10
// Arduino TX = 11

const int relay1 = 7;
const int relay2 = 8;
const int relay3 = 9;
const int relay4 = 12;

void setup() {

  Serial.begin(9600);
  bluetooth.begin(9600);

  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  // Assuming active-LOW relay module
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);

  Serial.println("Bluetooth Home Automation Started");
}

void loop() {

  if (bluetooth.available()) {

    char command = bluetooth.read();

    Serial.print("Received Command: ");
    Serial.println(command);

    switch (command) {

      case '1':
        digitalWrite(relay1, LOW);
        break;

      case '2':
        digitalWrite(relay1, HIGH);
        break;

      case '3':
        digitalWrite(relay2, LOW);
        break;

      case '4':
        digitalWrite(relay2, HIGH);
        break;

      case '5':
        digitalWrite(relay3, LOW);
        break;

      case '6':
        digitalWrite(relay3, HIGH);
        break;

      case '7':
        digitalWrite(relay4, LOW);
        break;

      case '8':
        digitalWrite(relay4, HIGH);
        break;
    }
  }
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
