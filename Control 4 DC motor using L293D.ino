int speedpin1=3;
int dir1=2;
int dir2=5;
int speedpin2=11;
int dir3=10;
int dir4=12;
int speedpin3=6;
int dir5=4;
int dir6=7;
int speedpin4=9;
int dir7=8;
int dir8=13;

String msg;

void setup()
{
  Serial.begin(9600);
  pinMode(speedpin1, OUTPUT);
  pinMode(speedpin2, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(dir3, OUTPUT);
  pinMode(dir4, OUTPUT);
  pinMode(speedpin3, OUTPUT);
  pinMode(speedpin4, OUTPUT);
  pinMode(dir5, OUTPUT);
  pinMode(dir6, OUTPUT);
  pinMode(dir7, OUTPUT);
  pinMode(dir8, OUTPUT);
  
}
void loop(){
  Serial.println("Choose your option");
  while(Serial.available()==0){
  
  }
  msg=Serial.readString();
  if(msg=="F"){
    Forward();
  }
  if(msg=="B"){
    Backward();
  }
  if(msg=="R"){
    turnRight();
  }
  if(msg=="L"){
    turnLeft();
  }
}
//to move forward at full speed.
void Forward()
{
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  digitalWrite(dir3,HIGH);
  digitalWrite(dir4,LOW);
  digitalWrite(dir5,LOW);
  digitalWrite(dir6,LOW);
  digitalWrite(dir7,LOW);
  digitalWrite(dir8,LOW);
  analogWrite(speedpin1,255);
  analogWrite(speedpin2,255);
  analogWrite(speedpin3,0);
  analogWrite(speedpin4,0);
}
//to move backward at full speed.
void Backward()
{
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  digitalWrite(dir3,LOW);
  digitalWrite(dir4,HIGH);
  digitalWrite(dir5,LOW);
  digitalWrite(dir6,LOW);
  digitalWrite(dir7,LOW);
  digitalWrite(dir8,LOW);
  analogWrite(speedpin1,255);
  analogWrite(speedpin2,255);
  analogWrite(speedpin3,255);
  analogWrite(speedpin4,255);
}
//to turn right and stop.
void turnRight()
{
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  digitalWrite(dir3,HIGH);
  digitalWrite(dir4,LOW);
  digitalWrite(dir5,LOW);
  digitalWrite(dir6,HIGH);
  digitalWrite(dir7,LOW);
  digitalWrite(dir8,HIGH);
  analogWrite(speedpin1,125);
  analogWrite(speedpin2,125);
  analogWrite(speedpin3,255);
  analogWrite(speedpin4,255);
}
// to turn left and stop.
void turnLeft()
{
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  digitalWrite(dir3,HIGH);
  digitalWrite(dir4,LOW);
  digitalWrite(dir5,HIGH);
  digitalWrite(dir6,LOW);
  digitalWrite(dir7,HIGH);
  digitalWrite(dir8,LOW);
  analogWrite(speedpin1,125);
  analogWrite(speedpin2,125);
  analogWrite(speedpin3,255);
  analogWrite(speedpin4,255);
 
}

