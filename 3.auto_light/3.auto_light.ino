void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bright = analogRead(A0);

  Serial.println(bright);

  if(bright >= 750)          // 주변 환경이 어두워지면
  {
    digitalWrite(13, HIGH); // LED 킴
  }
  else  // 주변 환경이 밝으면
  digitalWrite(13, LOW);    // LED 끔
}
