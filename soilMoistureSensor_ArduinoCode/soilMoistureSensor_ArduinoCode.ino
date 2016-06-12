    int SENSE= 0; // Soil Sensor input at Analog PIN A0
    int value= 0;
    void setup() {
       Serial.begin(9600);
       Serial.println("SOIL MOISTURE SENSOR");
       Serial.println("-----------------------------");
    }
    void loop() {
       value= analogRead(SENSE);
       value= value/10;
       Serial.println(value);
       if(value<50)
       {
          Serial.println("WET");
       }
       else
       {
          Serial.println("DRY");
       }
       delay(1000);

    }
