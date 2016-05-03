
float x_raw,y_raw,z_raw;
void setup()
{
analogReference(EXTERNAL); // FOR the analog reference
Serial.begin(9600);
Serial.println("initailising session");
Serial.println ("now printing the readings");
delay (1000);
Serial.println("x\ty\tz");
}
void loop()
{
 analogReference(EXTERNAL);
  x_raw=analogRead(A0); //these are the raw readings
 y_raw=analogRead(A1); //
 z_raw=analogRead(A2); //
 // assigning the reference value;

 // converting the readings from adc units to G units.
Serial.print(x_raw);
Serial.print("\t");
Serial.print(y_raw);
Serial.print("\t");
Serial.print(z_raw);
Serial.print("\n");
delay(10);
}

