#define r1 11
#define r2 12
#define r3 13


void setup() {
  // put your setup code here, to run once:
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i=0;i<3;i++){
    digitalWrite(r1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(r3, HIGH);
    delay(300);
    digitalWrite(r1, LOW);
    digitalWrite(r2, LOW);
    digitalWrite(r3, LOW);
    delay(300);
  }
  digitalWrite(r3, HIGH);
  delay(500);
  digitalWrite(r2, HIGH);
  delay(500);
  digitalWrite(r1, HIGH);
  delay(500);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(r3, LOW);
  delay(500);
   digitalWrite(r1, HIGH);
  delay(500);
  digitalWrite(r2, HIGH);
  delay(500);
  digitalWrite(r3, HIGH);
  delay(500);

}
