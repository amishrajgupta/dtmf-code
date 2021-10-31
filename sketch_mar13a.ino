void setup() {
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT); 
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  if(digitalRead(4)==0 && digitalRead(5)==0 && digitalRead(6)==0 && digitalRead(7)==0){
    
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);  
    digitalWrite(10,LOW);  
    digitalWrite(11,LOW);
    delay(500);
    
    }
  
   if(digitalRead(4)==1 && digitalRead(5)==0 && digitalRead(6)==0 && digitalRead(7)==0){
    
      digitalWrite(8,HIGH);
        digitalWrite(9,LOW); 
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);  
      
    
    }
    if(digitalRead(4)==0 && digitalRead(5)==1 && digitalRead(6)==0 && digitalRead(7)==0){
       digitalWrite(8,LOW);
        digitalWrite(9,LOW); 
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
      
      
      }
      
    if(digitalRead(4)==1 && digitalRead(5)==1 && digitalRead(6)==0 && digitalRead(7)==0){
       digitalWrite(8,LOW);
        digitalWrite(9,HIGH); 
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
    }
     if(digitalRead(4)==0 && digitalRead(5)==0 && digitalRead(6)==1 && digitalRead(7)==0){
      
        digitalWrite(8,LOW);
        digitalWrite(9,LOW); 
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
      
      }
     if(digitalRead(4)==1 && digitalRead(5)==0 && digitalRead(6)==1 && digitalRead(7)==0){
      
      
        
        digitalWrite(8,LOW);
        digitalWrite(9,LOW); 
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
      
      }
      
     if(digitalRead(4)==0 && digitalRead(5)==1 && digitalRead(6)==1  && digitalRead(7)==0){
      
      
        digitalWrite(8,LOW);
        digitalWrite(9,LOW); 
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
      
      
      
      
      }
      
     if(digitalRead(4)==1 && digitalRead(5)==1 && digitalRead(6)==1 && digitalRead(7)==0){
       digitalWrite(8,LOW);
        digitalWrite(9,LOW); 
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
      
      
      }
           if(digitalRead(4)==0 && digitalRead(5)==0 && digitalRead(6)==0 && digitalRead(7)==1){
       digitalWrite(8,LOW);
        digitalWrite(9,LOW); 
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);}
}
