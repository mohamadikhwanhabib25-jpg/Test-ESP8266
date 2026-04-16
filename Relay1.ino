#define PinRelay1 D1
#define PinRelay2 D3

void setup() {
  pinMode(PinRelay1, OUTPUT);
  pinMode(PinRelay2, OUTPUT);
  digitalWrite(PinRelay1, HIGH); 
  digitalWrite(PinRelay2, HIGH); 
  Serial.begin(9600);
  Serial.println("Tes Relay ESP8266");
}

void loop() {
  Serial.println("Relay1 ON");
  digitalWrite(PinRelay1, LOW); 
  delay(2000); 

  Serial.println("Relay1 OFF");
  digitalWrite(PinRelay1, HIGH); 

  Serial.println("Relay2 ON");
  digitalWrite(PinRelay2, LOW); 
  delay(2000); 

  Serial.println("Relay2 OFF");
  digitalWrite(PinRelay2, HIGH);  
}