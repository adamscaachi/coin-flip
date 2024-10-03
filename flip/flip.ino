int yellowPin = 2;
int redPin = 6;
int buttonPin = 13;
int buttonRead;

void setup(){
  Serial.begin(9600);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  randomSeed(analogRead(A0));
}

void loop(){
  buttonRead = digitalRead(buttonPin);
  //Serial.println(buttonRead);
  if (buttonRead == 1){
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  } else{
    int r = random(0, 2);
    //Serial.println(r);
    if (r == 0){
      digitalWrite(yellowPin, HIGH);  
    } else{
      digitalWrite(redPin, HIGH);
    }
    delay(1000);
  }
}