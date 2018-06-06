const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to
int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
void setup() {
  Serial.begin(9600);}
void loop() {
  sensorValue = analogRead(analogInPin);

  if (sensorValue>930){
    sensorValue=930;
  }
  else if(sensorValue<760){
    sensorValue=760;
  }
 outputValue = map(sensorValue, 760, 930, 0, 255);
  analogWrite(analogOutPin, outputValue);
  Serial.print("sensor = " );
  Serial.println(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
  delay(2);
}

