void setup(){
pinMode(2,OUTPUT); 
pinMode(3,OUTPUT); 
pinMode(4,OUTPUT); 
pinMode(5,OUTPUT); 
pinMode(6,OUTPUT); 
pinMode(7,OUTPUT); 
pinMode(8,OUTPUT); 
pinMode(9,OUTPUT); 

}
 
void loop(){
digitalWrite(2,HIGH); 
digitalWrite(3,LOW); 
delay(2000);
digitalWrite(2,LOW); 
digitalWrite(3,HIGH); 
delay(2000);
}