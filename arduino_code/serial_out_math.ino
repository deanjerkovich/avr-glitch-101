/*
 avr-glitch AVR code

 A very basic loop which does some simple arithmetic, used to demonstrate
 when a successful glitch attack has corrupted data or instructions.
*/


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void doreset() {
  Serial.println("reset occured.");
}

//no exit
void mainloop(){
  while (1) {
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(200);                        
    digitalWrite(LED_BUILTIN, LOW);    
    delay(200);
    int i,j;
    i = 0;
    i = j;
    int ctr=0;
    for(i=0;i<500;i++){
      for(j=0;j<500;j++){
        if (j%100==0) {
          ctr++;
        }
      }
      if (j < 300) {
        Serial.print("glitch! j = ");
        Serial.println(j);
      }
    }
      Serial.print(i);
      Serial.print(" + ");
      Serial.print(j);
      Serial.print(" = ");
      Serial.print(i+j);
      Serial.print(" ctr: ");
      Serial.println(ctr);
    }
}

void loop() {
  doreset();
  mainloop();
}
