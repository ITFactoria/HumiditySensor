
const int sensorPin = A0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int humidity = analogRead(sensorPin);
  int humidityValue = map((analogRead(sensorPin)),0,1023,100,0);
  Serial.print ("\n Humidity: ");
  Serial.print (humidity);
  Serial.print ("\t Humidity value: ");
  Serial.print (humidityValue);
  

  
  delay(1000);

}
