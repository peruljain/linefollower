int leftsensor = 1;
int centersensor = 2;
int rightsensor = 3;
int leftmotor1 = 4;
int leftmotor2 = 5;
int rightmotor1 = 6;
int rightmotor2 = 7;
int flag = 8;
int counter = 0;



void setup() {
  // put your setup code here, to run once:

  pinMode(leftsensor,INPUT);
  pinMode(centersensor,INPUT);
  pinMode(rightsensor,INPUT);
  pinMode(leftmotor1,OUTPUT);
  pinMode(leftmotor2,OUTPUT);
  pinMode(rightmotor1,OUTPUT);
  pinMode(rightmotor2,OUTPUT);
  pinMode(flag,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:

  if((leftsensor == HIGH)&&(centersensor == LOW) &&(rightsensor == HIGH)){
    digitalWrite(leftmotor1,HIGH);
     digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,HIGH);
       digitalWrite(rightmotor2,LOW);//to move forward
    
  }
  if((leftsensor == HIGH)&&(centersensor == HIGH) &&(rightsensor == LOW)){
    digitalWrite(leftmotor1,LOW);
     digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,HIGH);
       digitalWrite(rightmotor2,LOW);// to move left
    
  }
   if((leftsensor == LOW)&&(centersensor == HIGH) &&(rightsensor == HIGH)){
    digitalWrite(leftmotor1,HIGH);
     digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,LOW);
       digitalWrite(rightmotor2,LOW);// to move right
    
  }
   if((leftsensor == HIGH)&&(centersensor == LOW) &&(rightsensor == LOW)){
    digitalWrite(leftmotor1,LOW);
     digitalWrite(leftmotor2,HIGH);
      digitalWrite(rightmotor1,HIGH);
       digitalWrite(rightmotor2,LOW);// to move POWER LEFT
    
  }
  if((leftsensor == LOW)&&(centersensor == LOW) &&(rightsensor == HIGH)){
    digitalWrite(leftmotor1,HIGH);
     digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,LOW);
       digitalWrite(rightmotor2,HIGH);// to move POWER RIGHT
    
  }
  if((leftsensor == HIGH)&&(centersensor == HIGH) &&(rightsensor == HIGH)){
    digitalWrite(leftmotor1,HIGH);
     digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,HIGH);
       digitalWrite(rightmotor2,LOW);//to move forward
       counter++;
  }
  if(counter == 12 && (leftsensor == HIGH)&&(centersensor == HIGH) &&(rightsensor == HIGH) ){
    digitalWrite(8,HIGH);
    digitalWrite(leftmotor1,LOW);
     digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,LOW);
       digitalWrite(rightmotor2,LOW);//to move forward
    delay(2000);
  }
  
}

