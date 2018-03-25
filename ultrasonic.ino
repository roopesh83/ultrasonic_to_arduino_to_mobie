int trigpin=13;
int echopin=11;
float ping_time;
float dist;

float s;
void setup()
{
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);


}





void loop()
{
digitalWrite(trigpin,LOW);
delayMicroseconds(2000);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

ping_time=pulseIn(echopin,HIGH);
dist=333*(ping_time);
dist/=2;
delay(1000);


int a1=round((dist/1000000)*100);

//Serial.print(Serial.write(a1));
//Serial.print("\n");
Serial.print((char)('A'+a1));

//Serial.print((dist/1000000)*100);

//Serial.print((dist/1000000)*100);  //microseconds
//Serial.print(" ");



}


