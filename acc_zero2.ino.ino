int zero_x=512,zero_y=512,zero_z=512;
float x_raw,y_raw,z_raw,x_f,y_f,z_f,R;
float con=57.324; // radian to degree
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
 x_raw=analogRead(A0); //these are the raw readings
 y_raw=analogRead(A1); //
 z_raw=analogRead(A2); //
 // assigning the reference value;
x_f=(x_raw-zero_x)/102.3;
y_f=(y_raw-zero_y)/102.3;
z_f=(z_raw-zero_z)/102.3;
R=(x_f*x_f)+(y_f*y_f)+(z_f*z_f);
 // converting the readings from adc units to G units.
Serial.print((acos(x_f/R))*con);
Serial.print("\t");
Serial.print((acos(y_f/R))*con);
Serial.print("\t");
Serial.print((acos(z_f/R))*con);
Serial.print("\n");
delay(1000);
}

