void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  
  //BatteryLevel 0 ~ 1024
  Serial.print("BatteryLevel     : ");
  Serial.println(analogRead(A0));
  
  //VariableResistor 450 ~ 950
  Serial.print("VariableResistor : ");
  Serial.println(analogRead(A1));
  
  delay(1000);
}
