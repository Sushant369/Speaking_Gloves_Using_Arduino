
void setup() {
 //lcd.begin(16,2); 
 Serial.begin(9600);
 pinMode(2, INPUT_PULLUP);
 pinMode(3, INPUT_PULLUP);
 pinMode(4, INPUT_PULLUP);
 pinMode(5, INPUT_PULLUP);
 pinMode(6, INPUT_PULLUP);
 pinMode(7, INPUT_PULLUP);
 pinMode(8, INPUT_PULLUP);
 pinMode(9, INPUT_PULLUP);
 pinMode(10,INPUT_PULLUP);
 pinMode(11,INPUT_PULLUP);
 pinMode(12,INPUT_PULLUP);
 pinMode(13,INPUT_PULLUP);

}

void loop() {
   byte sensorVal1 = digitalRead(2);
   if (sensorVal1 == LOW) 
   {
        // lcd.setCursor(0,0);
       // lcd.print("thanku");
        Serial.println(1);//thanku
        delay(1000);
   }
   byte sensorVal2 = digitalRead(3);
   if (sensorVal2 == LOW) 
   {//lcd.setCursor(0,0);
        //cd.print("where's washroom");
        Serial.println(2);//i want water
          delay(1000);
   }
   byte sensorVal3 = digitalRead(4);
   if (sensorVal3 == LOW) 
   {
    //lcd.setCursor(0,0);
 
        Serial.println(3);//whrs washroom
          delay(1000);
   }
   byte sensorVal4 = digitalRead(5);
   if (sensorVal4 == LOW) 
   {
        Serial.println(4);//i m srry
          delay(1000);
   }
   byte sensorVal5 = digitalRead(6);
   if (sensorVal5 == LOW) 
   {
        Serial.println(55);//paining
          delay(1000);
   }
   byte sensorVal6 = digitalRead(7);
   if (sensorVal6 == LOW) 
   {//lcd.setCursor(0,0);
       // lcd.print("I am fine");
        Serial.println(21);//call ambulance
          delay(1000);
   }
   byte sensorVal7 = digitalRead(8);
   if (sensorVal7 == LOW) 
   {
        Serial.println(31);//how r u 
          delay(1000);
   }
   byte sensorVal8 = digitalRead(9);
   if (sensorVal8 == LOW) 
   {
        Serial.println(56);//plz help me
          delay(1000);
   }
   byte sensorVal9 = digitalRead(10);
   if (sensorVal9 == LOW) 
   {
        Serial.println(62);//hello
          delay(1000);
   }
   byte sensorVal10 = digitalRead(11);
   if (sensorVal10 == LOW) 
   {
        Serial.println(47);//call doc
          delay(1000);
   }
   byte sensorVal11 = digitalRead(12);
   if (sensorVal11 == LOW) 
   {
        Serial.println(36);//call police
          delay(1000);
   }
    byte sensorVal12 = digitalRead(13);
   if (sensorVal12 == LOW) 
   {
        Serial.println(72);//i want food
          delay(1000);
   }
    

}
