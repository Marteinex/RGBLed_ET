int r=9;
int b=10;
int g=11;

byte fenyEro=0;
byte irany=1;

int poti=0;
int poti2=0;
int poti3=0;

void setup() {
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
  
  pinMode(A1,INPUT);
  Serial.begin(9600);

  pinMode(A2,INPUT);
  pinMode(A3,INPUT);

  digitalWrite(r,1);
  delay(500);

  digitalWrite(r,0);
  digitalWrite(b,1);
  delay(500);

  digitalWrite(b,0);
  digitalWrite(g,1);
  delay(500);

  digitalWrite(r,0);
  digitalWrite(b,0);
  digitalWrite(g,0);


}

void loop() {
  poti=analogRead(A1);
  fenyEro=map(poti,0,1023,0,255);
  
  /*Serial.print("Analóg érték: ");
Serial.print(poti);
Serial.print("; Fényerő: ");
Serial.println(fenyEro);*/

analogWrite(r,fenyEro);


 poti2=analogRead(A2);
  fenyEro=map(poti2,0,1023,0,255);
  
analogWrite(b,fenyEro);

 poti3=analogRead(A3);
  fenyEro=map(poti3,0,1023,0,255);
  
analogWrite(g,fenyEro);
/*if (fenyEro==255) {irany=-1;}
if (fenyEro==0) irany=1;
fenyEro=fenyEro+irany;
delay(10);*/

}
