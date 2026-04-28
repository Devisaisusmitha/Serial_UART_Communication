// C++ code
// Arduino-1 Code
char systr[20]="Hello,World";
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  Serial.write(systr,20);
  delay(1000);
}
