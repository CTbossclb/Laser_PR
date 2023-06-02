int led = 7;
int lsr = 6;
int pr = A0;
int prd;

void setup() {

  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(lsr, OUTPUT);
  pinMode(pr, INPUT);

  digitalWrite(led, 0);
  digitalWrite(lsr, 1);

}

void loop() {
  
  prd = analogRead(pr);

  if( prd > 100){
    digitalWrite(led, 0);
  } else {
    digitalWrite(led, 1);
  }

  Serial.println(prd);

}
