const int ledPin    = 9;
const int buttonPin = 2;
const int potBright = A0;
const int potBlink  = A1;
<<<<<<< HEAD
const int A = 3;
const int B = 4;
const int C = 5;
const int D = 6;
const int E = 7;
const int F = 8;
const int G = 10;

void zero ();
void one ();
void two ();
=======
>>>>>>> e8a018ecb7b99e0c6e1dd740da3f9d9bf58717d9

int mode = 0;

unsigned long now            = 0;
unsigned long lastClickTime  = 0;
unsigned long eventStartTime = 0;

int buttonState     = LOW;
int lastButtonState = LOW;

int blinkDelay = 300;
int holdThresh = 500;

int step = 0;

void setup() {
  pinMode(ledPin,    OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
  now = millis();

  blinkDelay = map(analogRead(potBlink), 0, 1023, 50, 1000);

  buttonState = digitalRead(buttonPin);

  bool risingEdge  = (buttonState == HIGH && lastButtonState == LOW);
  bool fallingEdge = (buttonState == LOW  && lastButtonState == HIGH);

  if (risingEdge) {
    lastClickTime = now;
  }

  if (fallingEdge && (now - lastClickTime) < holdThresh) {
    mode = (mode + 1) % 2;
    step = 0;
    eventStartTime = now;
  }

  if (fallingEdge && (now - lastClickTime) >= holdThresh) {
    mode = 2;
    step = 0;
    eventStartTime = now;
  }

  if (mode == 0) {
    analogWrite(ledPin, 0);
<<<<<<< HEAD
    zero ();
=======
>>>>>>> e8a018ecb7b99e0c6e1dd740da3f9d9bf58717d9
  }
  else if (mode == 1) {
    int brightness = map(analogRead(potBright), 0, 1023, 0, 255);
    analogWrite(ledPin, brightness);
<<<<<<< HEAD
    one ();
=======
>>>>>>> e8a018ecb7b99e0c6e1dd740da3f9d9bf58717d9
  }
  else if (mode == 2) {
    int brightness = map(analogRead(potBright), 0, 1023, 0, 255);
    step = ((now - eventStartTime) / blinkDelay) % 2;
    analogWrite(ledPin, step ? brightness : 0);
<<<<<<< HEAD
    two ();
  }

  lastButtonState = buttonState;
}

void zero (void) {
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, LOW);
}

void one (void) {
  digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
}

void two (void) {
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
=======
  }

  lastButtonState = buttonState;
>>>>>>> e8a018ecb7b99e0c6e1dd740da3f9d9bf58717d9
}