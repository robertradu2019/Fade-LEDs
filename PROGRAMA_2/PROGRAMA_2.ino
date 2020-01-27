/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;

int velocitat = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 0);     
  analogWrite(led1, 0);    
  analogWrite(led2, 0);    
  analogWrite(led3, 0);     
  analogWrite(led4, 0);     
  analogWrite(led5, 0);     
  
  delay(velocitat);  

 // Valors utilitzats : 30,60,90,120 , 190 ,255
  
  analogWrite(led0, 30);    
  analogWrite(led1, 0);    
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);    
  
  delay(velocitat);           
  
  analogWrite(led0, 60);   
  analogWrite(led1, 30);    
  analogWrite(led2, 0);   
  analogWrite(led3, 0);    
  analogWrite(led4, 0);   
  analogWrite(led5, 0);    
   
  delay(velocitat);          
  
  analogWrite(led0, 90);    
  analogWrite(led1, 60);    
  analogWrite(led2, 30);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);   
  analogWrite(led5, 0);   
  
  delay(velocitat); 
  
  analogWrite(led0, 120);    
  analogWrite(led1, 90);    
  analogWrite(led2, 60);    
  analogWrite(led3, 30);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);
 
   delay(velocitat); 
  analogWrite(led0, 190);    
  analogWrite(led1, 120);    
  analogWrite(led2, 90);   
  analogWrite(led3, 60);    
  analogWrite(led4, 30);   
  analogWrite(led5, 0); 

 delay(velocitat);

  analogWrite(led0, 255);    
  analogWrite(led1, 190);    
  analogWrite(led2, 120);    
  analogWrite(led3, 90);    
  analogWrite(led4, 60);    
  analogWrite(led5, 30); 

   
    delay(velocitat);
    
  analogWrite(led0, 255);    
  analogWrite(led1, 255);   
  analogWrite(led2, 190);    
  analogWrite(led3, 190);   
  analogWrite(led4, 120);   
  analogWrite(led5, 60);
  
    delay(velocitat);
    
   analogWrite(led0, 255);    
  analogWrite(led1, 255);    
  analogWrite(led2, 255);   
  analogWrite(led3, 190);    
  analogWrite(led4, 120);   
  analogWrite(led5, 60);
  
   delay(velocitat);
  analogWrite(led0, 255);   
  analogWrite(led1, 255);    
  analogWrite(led2, 255);    
  analogWrite(led3, 255);   
  analogWrite(led4, 190);   
  analogWrite(led5, 120);
   delay(velocitat);
  analogWrite(led0, 255);   
  analogWrite(led1, 255);    
  analogWrite(led2, 255);   
  analogWrite(led3, 255);    
  analogWrite(led4, 255);    
  analogWrite(led5, 190);
   delay(velocitat);
  analogWrite(led0, 255);   
  analogWrite(led1, 255);   
  analogWrite(led2, 255);   
  analogWrite(led3, 255);    
  analogWrite(led4, 255);    
  analogWrite(led5, 255);
}

//********** Funcions *************************************************************
