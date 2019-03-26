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
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
  Serial.begin(9600);
     for (int i = 0; i < 40; i++) {
     myvalue[i] =EEPROM.read(i);
  
       Serial.print(myvalue[i]);
   
  }
       Serial.println(" ");
    
 }

void loop() {


     motor=0;
      while (Serial.available()) {
          
     
      myvalue[motor] = Serial.read();
      EEPROM.write(motor,myvalue[motor]);
      Serial.print( myvalue[motor]);
      motor++;    
    
    
        }


    if(bucla==0){

      if(myvalue[0]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[1]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[2]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[3]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    if(bucla==1){
   
      if(myvalue[4]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[5]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[6]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[7]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    if(bucla==2){
         if(myvalue[8]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[9]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[10]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[11]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    
    if(bucla==3){

      if(myvalue[12]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[13]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[14]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[15]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    
    if(bucla==4){

      if(myvalue[16]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[17]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[18]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[19]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    
    if(bucla==5){
      
      if(myvalue[20]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[21]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[22]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[23]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    
    if(bucla==6){

      if(myvalue[24]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[25]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[26]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[27]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    
    if(bucla==7){

      if(myvalue[28]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[29]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[30]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[31]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    
    if(bucla==8){

      if(myvalue[32]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[33]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[34]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[35]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    
    if(bucla==9){

      if(myvalue[36]==49){
      digitalWrite(6, HIGH);
      }else {
      digitalWrite(6, LOW);   
      }  
      if(myvalue[37]==49){
      digitalWrite(7, HIGH);
      }else {
      digitalWrite(7, LOW);   
      }
      if(myvalue[38]==49){
      digitalWrite(8, HIGH);
      }else {
      digitalWrite(8, LOW);   
      }
      if(myvalue[39]==49){
      digitalWrite(9, HIGH);
      }else {
      digitalWrite(9, LOW);   
      }

    }
    
      delay(1000);
      bucla ++;
      if(bucla>9) bucla=0; // per sicurezza ... in caso che qualcosa esterno fa crescere bucla
    

}
