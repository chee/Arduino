
const int pin = A0; 
float value;
float voltage;
float celsius;

void setup() {
  pinMode(pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(pin);
  voltage = (value * 5000) / 1024;
  
  celsius = voltage / 10;

  Serial.print(celsius);
  Serial.print("\n");
  delay(100);
}
