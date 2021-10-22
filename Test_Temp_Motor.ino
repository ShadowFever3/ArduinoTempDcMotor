int motorPin = 9;
int sensorInput;
int sensePin = A5;
double temp;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(motorPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

sensorInput = analogRead(A5);
temp = (double)sensorInput / 1024;
temp = (temp * 5);
temp = (temp * 0.5);
temp = (temp * 100);
Serial.println("Current Temp: ");
Serial.println(temp);
//Temp = to actual Temp
if(temp >= 26){
  digitalWrite(motorPin, HIGH);
  }
  else{
    digitalWrite(motorPin, LOW);
  
}
}
