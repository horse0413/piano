int notes[] = {
  262,
  294,
  330,
  349,
  392,
  440,
  493,
  523
};

const int a = 12;
const int b = 11;
const int c = 10;
const int d = 9;
const int e = 7;
const int f = 6;
const int g = 5;
const int h = 4;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;
int buttonState8 = 0;


void setup() {
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(c, INPUT);
  pinMode(d, INPUT);
  pinMode(e, INPUT);
  pinMode(f, INPUT);
  pinMode(g, INPUT);
  pinMode(h, INPUT);
  Serial.begin(9600);
}

void loop() {

  buttonState1 = digitalRead(a);
  buttonState2 = digitalRead(b);
  buttonState3 = digitalRead(c);
  buttonState4 = digitalRead(d);
  buttonState5 = digitalRead(e);
  buttonState6 = digitalRead(f);
  buttonState7 = digitalRead(g);
  buttonState8 = digitalRead(h);


  if (buttonState1 == HIGH) {
    tone(8, notes[0]);
  }
  else  if (buttonState2 == HIGH) {
    tone(8, notes[1]);
  }
  else  if (buttonState3 == HIGH) {
    tone(8, notes[2]);
  }
  else  if (buttonState4 == HIGH) {
    tone(8, notes[3]);
  }
  else if (buttonState5 == HIGH) {
    tone(8, notes[4]);
  }
  else  if (buttonState6 == HIGH) {
    tone(8, notes[5]);
  }
  else  if (buttonState7 == HIGH) {
    tone(8, notes[6]);
  }
  else  if (buttonState8 == HIGH) {
    tone(8, notes[7]);
  }
  else {
    noTone(8);
  }
}
