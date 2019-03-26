#include <EEPROM.h>
byte value;
byte ledState = LOW;
int contor=0;
int motori=0;
int bucla=0;
int timeint;
int motor;
unsigned long currentMillis = millis();
unsigned long previousMillis = 0;      
unsigned long interval; 
char myvalue[40];
String my_name;


void setup() {
  // initialize serial:
    pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
     for (int i = 0; i < 40; i++) {
     myvalue[i] =EEPROM.read(i);
  
       Serial.print(myvalue[i]);
   
  }
       Serial.println(" ");
    
 }

void loop() {

  /*
  while (Serial.available() > 0){
     for (int i = 0; i < 10; i++) {
     timeint =Serial.parseInt();//quanto loop
     EEPROM.write(i,timeint);
     delay(100);
     myvalue[i] =timeint;
     Serial.print("loop=");
     Serial.print(myvalue[i]);
     Serial.println(i);
  }
*/


     motor=0;
      while (Serial.available()) {
          
      
      myvalue[motor] = Serial.read();
      EEPROM.write(motor,myvalue[motor]);
      Serial.print( myvalue[motor]);
      motor++;    
    
    
        }



  
    interval=1000;

  
   currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;


    if(bucla==0){

      if(myvalue[0]==49){
      digitalWrite(13, HIGH);
       Serial.println("0 inauntru 1");
      }else {
      digitalWrite(13, LOW); 
       Serial.println("0 inauntru 0");  
      }

    }
    if(bucla==1){
   
            if(myvalue[1]==49){
      digitalWrite(LED_BUILTIN, HIGH);
       Serial.println("1 inauntru 1");
      }else {
      digitalWrite(LED_BUILTIN, LOW);
       Serial.println("1 inauntru 0");   
      }
    }
    if(bucla==2){
            if(myvalue[2]==49){
      digitalWrite(LED_BUILTIN, HIGH);
         Serial.println("2 inauntru 1");
      }else {
      digitalWrite(LED_BUILTIN, LOW);
         Serial.println("2 inauntru 0");   
      }
    }
    if(bucla==3){
            if(myvalue[3]==49){
      digitalWrite(LED_BUILTIN, HIGH);
      }else {
      digitalWrite(LED_BUILTIN, LOW);   
      }
    }
    if(bucla==4){
            if(myvalue[4]==49){
      digitalWrite(LED_BUILTIN, 1);
      }else {
      digitalWrite(LED_BUILTIN, 0);   
      }
    }
    if(bucla==5){
            if(myvalue[5]==49){
      digitalWrite(LED_BUILTIN, 1);
      }else {
      digitalWrite(LED_BUILTIN, 0);   
      }
    }
    if(bucla==6){
            if(myvalue[6]==49){
      digitalWrite(LED_BUILTIN, 1);
      }else {
      digitalWrite(LED_BUILTIN, 0);   
      }
    }
    if(bucla==7){
            if(myvalue[7]==49){
      digitalWrite(LED_BUILTIN, 1);
      }else {
      digitalWrite(LED_BUILTIN, 0);   
      }
    }
    if(bucla==8){
            if(myvalue[8]==49){
      digitalWrite(LED_BUILTIN, 1);
      }else {
      digitalWrite(LED_BUILTIN, 0);   
      }
    }
    if(bucla==9){
            if(myvalue[9]==49){
      digitalWrite(LED_BUILTIN, 1);
      }else {
      digitalWrite(LED_BUILTIN, 0);   
      }
    }



    // set the LED with the ledState of the variable:
    digitalWrite(LED_BUILTIN, ledState);
  
    bucla ++;
    if(bucla>9) bucla=0;
    
  }
}
