int pushbutton = 2;
int motor1= A0;
int motor2= A5;
int motor1time= 10;
int motor2time=10;


void setup() {
  pinMode(pushbutton, INPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop (){
if(digitalRead(pushbutton) == HIGH)
  digitalWrite(motor1, HIGH);

  delay(motor1time*1000);
  digitalWrite(motor1,LOW);
  }
