const int outPin = 3;
const int blinkTime = 200; // length of a blink unit, in ms
const int maxLength = 25; // max message length, arbitrary
boolean msgSent = false;

//   Write your message to be relayed here!
//     Only a-z, A-Z, and spaces.
//     No puntuation, special chars, or numbers.

char message[] = "you are a genius"; 


void setup() {
  pinMode(outPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
