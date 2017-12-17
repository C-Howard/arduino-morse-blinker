const int outPin = 3;
const int blinkTime = 200; // length of a blink unit, in ms
const int maxLength = 25; // max message length, arbitrary
boolean msgSent = false;

//   Write your message to be relayed here!
//    Only a-z, A-Z, and spaces.
//    No puntuation, special chars, or numbers.
//    Please update maxLength if message exceeds current max. 

char message[] = "you are a genius"; 


void setup() {
  pinMode(outPin, OUTPUT);
}

void loop() {
  
  if (!msgSent) {
    
    for (int i = 0; i < maxLength; i++) {
      flashLetter(message[i]);
    }

    msgSent = true;
  }
}

//  Turns LED on for 'len' units, then off for 1 unit.
void flash(int len) {
  digitalWrite(outPin, HIGH);
  delay(blinkTime * len);
  digitalWrite(outPin, LOW);
  delay(blinkTime); // 1 unit rest
}

// Flashes 'letter' in morse code on the LED.
void flashLetter(char letter) {
  if (letter == 32) { // space, 7 (5+2) units rest.
    delay(blinkTime*5);
    
  } else if (letter == 65 || letter == 97) {  // a, A = *_ = {1, 3}
    flash(1);
    flash(3);

  } else if (letter == 66 || letter == 98) {  // b, B = {3, 1, 1, 1}
    flash(3);
    flash(1);
    flash(1);
    flash(1);

  } else if (letter == 67 || letter == 99) {  // c, C = {3, 1, 3, 1}
    flash(3);
    flash(1);
    flash(3);
    flash(1);

  } else if (letter == 68 || letter == 100) {  // d, D = {3, 1, 1}
    flash(3);
    flash(1);
    flash(1);

  } else if (letter == 69 || letter == 101) {  // e, E = {1}
    flash(1);

  } else if (letter == 70 || letter == 102) {  // f, F = {1, 1, 3, 1}
    flash(1);
    flash(1);
    flash(3);
    flash(1);

  } else if (letter == 71 || letter == 103) {  // g, G = {3, 3, 1}
    flash(3);
    flash(3);
    flash(1);

  } else if (letter == 72 || letter == 104) {  // h, H = {1, 1, 1, 1}
    flash(1);
    flash(1);
    flash(1);
    flash(1);

  } else if (letter == 73 || letter == 105) {  // i, I = {1, 1}
    flash(1);
    flash(1);

  } else if (letter == 74 || letter == 106) {  // j, J = {1, 3, 3, 3}
    flash(1);
    flash(3);
    flash(3);
    flash(3);

  } else if (letter == 75 || letter == 107) {  // k, K = {3, 1, 3}
    flash(3);
    flash(1);
    flash(3);

  } else if (letter == 76 || letter == 108) {  // l, L = {1, 3, 1, 1}
    flash(1);
    flash(3);
    flash(1);
    flash(1);

  } else if (letter == 77 || letter == 109) {  // m, M = {3, 3}
    flash(3);
    flash(3);

  } else if (letter == 78 || letter == 110) {  // n, N = {3, 1}
    flash(3);
    flash(1);

  } else if (letter == 79 || letter == 111) {  // o, O = {3, 3, 3}
    flash(3);
    flash(3);
    flash(3);

  } else if (letter == 80 || letter == 112) {  // p, P = {1, 3, 3, 1}
    flash(1);
    flash(3);
    flash(3);
    flash(1);

  } else if (letter == 81 || letter == 113) {  // q, Q = {3, 3, 1, 3}
    flash(3);
    flash(3);
    flash(1);
    flash(3);

  } else if (letter == 82 || letter == 114) {  // r, R = {1, 3, 1}
    flash(1);
    flash(3);
    flash(1);

  } else if (letter == 83 || letter == 115) {  // s, S = {1, 1, 1}
    flash(1);
    flash(1);
    flash(1);

  } else if (letter == 84 || letter == 116) {  // t, T = {3}
    flash(3);

  } else if (letter == 85 || letter == 117) {  // u, U = {1, 1, 3}
    flash(1);
    flash(1);
    flash(3);

  } else if (letter == 86 || letter == 118) {  // v, V = {1, 1, 1, 3}
    flash(1);
    flash(1);
    flash(1);
    flash(3);

  } else if (letter == 87 || letter == 119) {  // w, W = {1, 3, 3}
    flash(1);
    flash(3);
    flash(3);

  } else if (letter == 88 || letter == 120) {  // x, X = {3, 1, 1, 3}
    flash(3);
    flash(1);
    flash(1);
    flash(3);

  } else if (letter == 89 || letter == 121) {  // y, Y = {3, 1, 3, 3}
    flash(3);
    flash(1);
    flash(3);
    flash(3);

  } else if (letter == 90 || letter == 122) {  // z, Z = {3, 3, 1, 1}
    flash(3);
    flash(3);
    flash(1);
    flash(1);
  }
  
  delay(blinkTime*2); // 3 (1+2) units rest 
}
