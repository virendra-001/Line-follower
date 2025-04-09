#define mfleft 2
#define mfright 4
#define mrleft 3
#define mrright 5
#define sens1 11
#define sens2 10
#define sens3 9
#define sens4 8
#define sens5 7

int fixspeed = 150;
int b = 0;
int w = 1;

void setup() {
  pinMode(mfleft, OUTPUT);
  pinMode(mfright, OUTPUT);
  pinMode(mrleft, OUTPUT);
  pinMode(mrright, OUTPUT);
  pinMode(sens1, INPUT);
  pinMode(sens2, INPUT);
  pinMode(sens3, INPUT);
  pinMode(sens4, INPUT);
  pinMode(sens5, INPUT);
}

void loop() {
  int s1 = digitalRead(sens1);
  int s2 = digitalRead(sens2);
  int s3 = digitalRead(sens3);
  int s4 = digitalRead(sens4);
  int s5 = digitalRead(sens5);
  
  
   if(s1==b && s2==b && s3==w && s4==b && s5==b){
   analogWrite(mfleft, 130);
  analogWrite(mfright, 130);
  }
  if(s1==b && s2==w && s3==w && s4==b && s5==b){
    analogWrite(mfleft,150);
    analogWrite(mfright,130);
  }
  if(s1==w && s2==w && s3==w && s4==w && s5==w){
    analogWrite(mfleft,150);
    analogWrite(mfright,150);
  }
  if(s1==b && s2==b && s3==w && s4==w && s5==b){
    analogWrite(mfleft,130);
    analogWrite(mfright,150);
  }
   if((  s2==w  && s4==b)||(s3==w && s2==w)||(s1==w && s2==w && s3==w)||(s1==w && s2==w && s3==w && s4==w)){
    analogWrite(mfright,0);
    analogWrite(mfleft,130);
  }
   if((s2==b && s4==w )||(s3==w && s4==w)||(s3==w && s4==w && s5==w)||(s2==w && s3==w && s4==w && s5==w)){
    analogWrite(mfright,130);
    analogWrite(mfleft,0);
  }
  if(s1==b && s2==b && s3==b && s4==b && s5==b){
    analogWrite(mfright,0);
    analogWrite(mfleft,0);
    analogWrite(mrleft,100);
    analogWrite(mrright,100);

  }
  }