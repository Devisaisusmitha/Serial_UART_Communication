// C++ code
//
char systr[20];
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  Serial.readBytes(systr,20);
  Serial.println(systr);
  delay(2000);
}