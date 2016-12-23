int ipin1=2;
int ipin2=4;
int ipin3=7;
int ipin4=8;
int ipin5=12;
int m1=5;
int m2=6;
int value=255;
void setup()
{
  pinMode(ipin1,INPUT);
  pinMode(ipin2,INPUT);
  pinMode(ipin3,INPUT);
  pinMode(ipin4,INPUT);
  pinMode(ipin5,INPUT);
  pinMode(m1,OUTPUT);//left motor
  pinMode(m2,OUTPUT);//right motor
}
void loop()
{
  int a=digitalRead(ipin1);
  int b=digitalRead(ipin2);
  int c=digitalRead(ipin3);
  int d=digitalRead(ipin4);
  int e=digitalRead(ipin5);
  if(a==1&&b==1&&c==0&&d==1&&e==1)//loop 1 go straight condition
  {
    digitalWrite(m1,HIGH);
    digitalWrite(m2,HIGH);
    
  }
 else if (a==1&&b==0&&c==0&&d==1&&e==1)//loop 2 taking left turn (simple)
 {
   for(value=255;value>=195;value-=5)
    {
     analogWrite(5,value);
    } 
    digitalWrite(m2,HIGH);
 }
 
 else if (a==0&&b==0&&c==1&&d==1&&e==1)//loop 3 taking left turn (steep)
  {
    for(value=255;value>=90;value-=5)
    {
      analogWrite(5,value);
    } 
    digitalWrite(m2,HIGH);
 }
 else if(a==0&&b==0&&c==0&&d==1&&e==1)// loop 4 taking left turn
 {
   for (value=255;value>=128;value-=5)
   {
      analogWrite(5,value);
    } 
    digitalWrite(m2,HIGH);
 }
 else if (a==1&&b==1&&c==0&&d==1&&e==0)// loop 5 taking acute right turn
 {
   for(value=255;value>=195;value-=5)
    {
     analogWrite(5,value);
    } 
    digitalWrite(m2,HIGH);
 }
else if (a==1&&b==1&&c==1&&d==1&&e==0)// loop 6
{
  for(value=255;value>=128;value-=5)
    {
     analogWrite(5,value);
    } 
    digitalWrite(m2,HIGH);
 }
  
else if (a==1&&b==1&&c==0&&d==0&&e==0)//loop 7
{
  for(value=255;value>=128;value-=5)
    {
     analogWrite(6,value);
    } 
    digitalWrite(m1,HIGH);
 }
 else if (a==1&&b==1&&c==0&&d==0&&e==1)//loop 8
{
  for(value=255;value>=195;value-=5)
    {
     analogWrite(6,value);
    } 
    digitalWrite(m1,HIGH);
 }
 else if (a==1&&b==1&&c==1&&d==1&&e==0)//loop 9
{
  for(value=255;value>=128;value-=5)
    {
     analogWrite(6,value);
    } 
    digitalWrite(m1,HIGH);
 }
 else if (a==1&&b==1&&c==1&&d==0&&e==0)//loop 10
{
  for(value=255;value>=90;value-=5)
    {
     analogWrite(6,value);
    } 
    digitalWrite(m1,HIGH);
 }
 else if (a==1&&b==1&&c==1&&d==1&&e==0)//loop11
{
  for(value=255;value>=128;value-=5)
    {
     analogWrite(6,value);
    } 
    digitalWrite(m1,HIGH);
 }
  else if (a==0&&b==1&&c==0&&d==1&&e==1)//loop 12
{
  for(value=255;value>=128;value-=5)
    {
     analogWrite(6,value);
    } 
    digitalWrite(m1,HIGH);
 }
  else if (a==0&&b==1&&c==1&&d==1&&e==1)
{
  for(value=255;value>=195;value-=5)
    {
     analogWrite(6,value);
    } 
    digitalWrite(m1,HIGH);
 }
  else if (a==0&&b==0&&c==1&&d==0&&e==0)//loop13 inversion stop
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
}
  value=0;
}
   
