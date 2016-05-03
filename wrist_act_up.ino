
float x_raw1,y_raw1,z_raw1,x_raw2,y_raw2,z_raw2,x,y,z;
int del=5,led=13;
void setup()
{
pinMode(led,OUTPUT);
  analogReference(EXTERNAL); // FOR the analog reference
Serial.begin(9600);
Serial.println("initailising session");
Serial.println ("now printing the readings");
delay (1000);
Serial.println("x\ty\tz");
}
void loop()
{
  x_raw1=analogRead(A0); //these are the raw readings
  y_raw1=analogRead(A1); //
  z_raw1=analogRead(A2); //
  delay(del);
  x_raw2=analogRead(A0); //these are the raw readings
  y_raw2=analogRead(A1); //
  z_raw2=analogRead(A2); //
 x=x_raw1-x_raw2;
 y=y_raw2-y_raw1;
 z=z_raw2-z_raw1;
 if(x<0)
 x=x*-1;
 if(x<0)
 y=y*-1;
 if(z<0)
 z=z*-1;
if ((x>120&& y< 60)&&(z>100 &&y<60))
   {
    digitalWrite(led,HIGH);
    Serial.println("activated...............");
   delay(1500);
 }


Serial.print(x);
Serial.print("\t");
Serial.print(y);
Serial.print("\t");
Serial.print(z);
Serial.print("\n");

digitalWrite(led,LOW);


}
