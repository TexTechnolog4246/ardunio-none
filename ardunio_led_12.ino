int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;




void setup() 
{
  
   pinMode(led3,OUTPUT);
   pinMode(led4,OUTPUT);
   pinMode(led5,OUTPUT);
   pinMode(led6,OUTPUT);
   pinMode(led7,OUTPUT);
   pinMode(led8,OUTPUT);
   pinMode(led9,OUTPUT);
   pinMode(led10,OUTPUT);
   pinMode(led11,OUTPUT);
   pinMode(led12,OUTPUT);
   pinMode(led13,OUTPUT);
  
  
}

void loop() 
{

   
 blink_3();
 blink_3();
 blink_3();
 blink_3();
  
 blink_4();
 blink_4();
 blink_4();


 blink_5(); 
 blink_5();
 blink_5(); 
 blink_5();

 blink_6();
 blink_6();
 blink_6();

 blink_7();
 blink_7();
 blink_7();

 blink_8();
 blink_8();
 blink_8();

 blink_9();
 blink_9();
 blink_9();

 blink_10();
 blink_10();
 blink_10();
 
 blink_11();
 blink_11();
 blink_11();
 
 
 
}

 /////////////pattern 3///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_3()
{
  int t=30;
  

  delay(t);
  digitalWrite(led3,HIGH);
  delay(t);
   digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);


  //////////////////////////



  delay(t);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led4,LOW);
  delay(t);
  digitalWrite(led5,LOW);
  delay(t);
  digitalWrite(led6,LOW);
  delay(t);
  digitalWrite(led7,LOW);
  delay(t);
  digitalWrite(led8,LOW);
  delay(t);
  digitalWrite(led9,LOW);
  delay(t);
  digitalWrite(led10,LOW);
  delay(t);
  digitalWrite(led11,LOW);
  delay(t);
  digitalWrite(led12,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);


  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  digitalWrite(led12,LOW);
  digitalWrite(led13,LOW);



}
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 4///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_4()
{
  int t=50;
 
  

  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(t);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  delay(t);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(t);
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  delay(t);
  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);
  delay(t);
  digitalWrite(led8,LOW);
  digitalWrite(led9,HIGH);
  delay(t);
  digitalWrite(led9,LOW);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led10,LOW);
  digitalWrite(led11,HIGH);
  delay(t);
  digitalWrite(led11,LOW);
  digitalWrite(led12,HIGH);
  delay(t);
  digitalWrite(led12,LOW);
  digitalWrite(led13,HIGH);
  delay(t);
  digitalWrite(led13,LOW);
  delay(t);






}

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 5///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_5()
{
  int t=150;

 
  digitalWrite(led3,HIGH);
  
  digitalWrite(led5,HIGH);

   digitalWrite(led7,HIGH);

   digitalWrite(led9,HIGH);

  digitalWrite(led11,HIGH);

  digitalWrite(led13,HIGH);

  
  digitalWrite(led4,LOW);
  
  digitalWrite(led6,LOW);
  
  digitalWrite(led8,LOW);
  
  digitalWrite(led10,LOW);
  
  digitalWrite(led12,LOW);

  delay(t);
  ////////////////

   digitalWrite(led3,LOW);
 
  digitalWrite(led5,LOW);
 
  digitalWrite(led7,LOW);
 
  digitalWrite(led9,LOW);

  digitalWrite(led11,LOW);

  digitalWrite(led13,LOW);

  
  digitalWrite(led4,HIGH);

  digitalWrite(led6,HIGH);
  
  digitalWrite(led8,HIGH);
  
  digitalWrite(led10,HIGH);
 
  digitalWrite(led12,HIGH);

   delay(t);



    digitalWrite(led3,HIGH);
  
  digitalWrite(led5,HIGH);

   digitalWrite(led7,HIGH);

  digitalWrite(led9,HIGH);

  digitalWrite(led11,HIGH);

  digitalWrite(led13,HIGH);


  
  digitalWrite(led4,LOW);
  
  digitalWrite(led6,LOW);
  
  digitalWrite(led8,LOW);
  
  digitalWrite(led10,LOW);
  
  digitalWrite(led12,LOW);

    delay(t);
    ////////////////

     digitalWrite(led3,LOW);
 
  digitalWrite(led5,LOW);
 
  digitalWrite(led7,LOW);
 
  digitalWrite(led9,LOW);

  digitalWrite(led11,LOW);

  digitalWrite(led13,LOW);

 
  
  digitalWrite(led4,HIGH);

  digitalWrite(led6,HIGH);
  
  digitalWrite(led8,HIGH);
  
  digitalWrite(led10,HIGH);
 
  digitalWrite(led12,HIGH);

  delay(t);

   digitalWrite(led13,LOW);
  digitalWrite(led12,LOW);
  digitalWrite(led11,LOW);
  digitalWrite(led10,LOW);

  

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 6///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_6()
{
  int t=50;
 digitalWrite(led3,HIGH);
  digitalWrite(led6,HIGH);
  delay(t);
  
  digitalWrite(led3,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led7,HIGH);
  delay(t);
  
  digitalWrite(led7,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led6,HIGH);
  digitalWrite(led5,HIGH);
  delay(t);

  digitalWrite(led6,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led12,HIGH);
  digitalWrite(led13,HIGH);
  digitalWrite(led13,LOW);
   delay(t);


  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  digitalWrite(led12,LOW);
  digitalWrite(led13,LOW);
   delay(t);
   
   
   
   

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 7///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_7()
{
 int t=50;

  digitalWrite(led3,HIGH);
  digitalWrite(led5,HIGH);
  delay(t);
  
  digitalWrite(led3,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led6,HIGH);
  delay(t);
  
  digitalWrite(led4,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led8,HIGH);
  digitalWrite(led11,HIGH);
  delay(t);
  
  digitalWrite(led8,LOW);
  digitalWrite(led11,LOW);
  digitalWrite(led10,HIGH);
  digitalWrite(led12,HIGH);
  delay(t);

  digitalWrite(led10,LOW);
  digitalWrite(led12,LOW);
  digitalWrite(led13,HIGH);
  digitalWrite(led13,LOW);
  delay(t);


  digitalWrite(led4,HIGH);
  digitalWrite(led3, LOW );
  delay(t);
digitalWrite(led5,HIGH);
  digitalWrite(led6, LOW );
  delay(t);
digitalWrite(led3,HIGH);
  digitalWrite(led4, LOW );
  delay(t);
digitalWrite(led6,HIGH);
  digitalWrite(led5, LOW );
  delay(t);
digitalWrite(led7,HIGH);
  digitalWrite(led10, LOW );
  delay(t);
digitalWrite(led9,HIGH);
  digitalWrite(led8, LOW );
  delay(t);
digitalWrite(led10,HIGH);
  digitalWrite(led7, LOW );
  delay(t);
digitalWrite(led8,HIGH);
  digitalWrite(led9, LOW );
  delay(t);
digitalWrite(led11,HIGH);
  digitalWrite(led10, LOW );
  delay(t);
digitalWrite(led12,HIGH);
  digitalWrite(led11, LOW );
  delay(t);
  
  digitalWrite(led13,HIGH);
  digitalWrite(led12, LOW );
  digitalWrite(led13, LOW );
  delay(t);

   
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 8///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_8()
{
  int t=50;

  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led4,HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led6,HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led9,HIGH);
  digitalWrite(led10,HIGH);
  delay(t);
  digitalWrite(led13,HIGH);
  delay(t);


  digitalWrite(led4,LOW);
  delay(t);


  digitalWrite(led5, LOW );
  digitalWrite(led6, LOW );
  delay(t);
  digitalWrite(led7,LOW);
  digitalWrite(led9, LOW );
  delay(t);
  digitalWrite(led8,LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led11,LOW);
  digitalWrite(led13,LOW);
  delay(t);

  
  }


  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 10///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_9()
{
  int t=100;

digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led7,HIGH);
delay(t);

digitalWrite(led8, HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led11,HIGH);
digitalWrite(led12,HIGH);
digitalWrite(led13,HIGH);
delay(t);



digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
digitalWrite(led7,LOW);
delay(t);


digitalWrite(led8, LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
digitalWrite(led13,LOW);
delay(t);


}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 10///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_10()
{
  int t=50;

  digitalWrite(led3,HIGH);
  digitalWrite(led4, LOW );
  delay(t);

  digitalWrite(led4,HIGH);
  digitalWrite(led3, LOW );
  delay(t);

  digitalWrite(led5,HIGH);
  digitalWrite(led6, LOW );
  delay(t);

  digitalWrite(led6,HIGH);
  digitalWrite(led5, LOW );
  delay(t);

  digitalWrite(led7,HIGH);
  digitalWrite(led8, LOW );
  delay(t);

  digitalWrite(led8,HIGH);
  digitalWrite(led7, LOW );
  delay(t);

  digitalWrite(led9,HIGH);
  digitalWrite(led10, LOW );
  delay(t);

  digitalWrite(led10,HIGH);
  digitalWrite(led9, LOW );
  delay(t);

  digitalWrite(led11,HIGH);
  digitalWrite(led12, LOW );
  delay(t);

  digitalWrite(led12,HIGH);
  digitalWrite(led11, LOW );
  delay(t);

  digitalWrite(led13,HIGH);
  digitalWrite(led13, LOW );
  delay(t);

}



 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 11///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_11()
{
  int t=50;
  
 digitalWrite(led3,HIGH);
 delay(t);

  digitalWrite(led4,HIGH);
  delay(t);
  
  digitalWrite(led5,HIGH);
  digitalWrite(led4, LOW );
  delay(t);

 digitalWrite(led6,HIGH);
  digitalWrite(led5, LOW );
  delay(t);

 digitalWrite(led7,HIGH);
  digitalWrite(led6, LOW );
  delay(t);

   digitalWrite(led8,HIGH);
  digitalWrite(led7, LOW );
  delay(t);

   digitalWrite(led9,HIGH);
  digitalWrite(led8, LOW );
  delay(t);

   digitalWrite(led10,HIGH);
  digitalWrite(led9, LOW );
  delay(t);

   digitalWrite(led11,HIGH);
  digitalWrite(led10, LOW );
  delay(t);

   digitalWrite(led12,HIGH);
  digitalWrite(led11, LOW );
  delay(t);

   digitalWrite(led13,HIGH);
  digitalWrite(led12,LOW);
   digitalWrite(led13, LOW );
  delay(t);
  
}
 
