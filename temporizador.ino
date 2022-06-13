#define on 6
#define off 5
#define A 10
#define B 13
#define C 12
#define D 11 

bool valueButtonOn = 0;
bool previousBtOn = 0;

void setup()
{
  pinMode(on, INPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  function();
}
void function(){
  valueButtonOn = digitalRead(on);
  if(valueButtonOn == 1 && previousBtOn == 0){
    display(0, 0, 0, 0);
  	delay(1000);
  	display(1, 0, 0, 0);
  	delay(1000);
  	display(0, 1, 0, 0);
  	delay(1000);
  	display(1, 1, 0, 0);
  	delay(1000);
  	display(0, 0, 1, 0);
  	delay(1000);
  	display(1, 0, 1, 0);
  	delay(1000);
  	display(0, 1, 1, 0);
  	delay(1000);
  	display(1, 1, 1, 0);
  	delay(1000);
  	display(0, 0, 0, 1);
  	delay(1000);
  	display(1, 0, 0, 1);
  	delay(1000);
    valueButtonOn = !valueButtonOn;
  }
  
  else{
    display(0, 1, 1, 1);
  }
}

void display(bool a, bool b, bool c, bool d){
  digitalWrite(A, a);
  digitalWrite(B, b);
  digitalWrite(C, c);
  digitalWrite(D, d);
}