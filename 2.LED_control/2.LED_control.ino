void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);  // LED
  pinMode(A3, INPUT);   // 가변저항
  Serial.begin(9600);   // Serial 통신 시작. 보드레이트 9600 설정
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A3); // 아날로그 센서값을 val 변수에 담음
  
  val = map(val, 0, 1023, 0, 255);
  Serial.println(val);         // Serial 모니터에 출력
  //digitalWrite(13, val);    // digital 출력
  analogWrite(11, val);       // analog 출력
}
