int L1=2;
int L11=3;
int R1=4;
int R11=5;

int G1=6;
int G11=7;

int D0=8;
int D1=9;
int D2=10;
int D3=11;


//Author: Kartikeya P Malimath

void setup()
{
    pinMode(L1,OUTPUT);  
    pinMode(L11,OUTPUT);
    pinMode(R1,OUTPUT);
    pinMode(R11,OUTPUT);
  
    pinMode(G1,OUTPUT);
    pinMode(G11,OUTPUT);
    

    
    pinMode(D0,INPUT);
    pinMode(D1,INPUT);
    pinMode(D2,INPUT);
    pinMode(D3,INPUT);    

}
void loop()
{
 //stop
    if(digitalRead(D3)== LOW && digitalRead(D2)==LOW && digitalRead(D1)==LOW && digitalRead(D0)==LOW)
{
    digitalWrite(L1,LOW);
    digitalWrite(L11,LOW);
    digitalWrite(R1,LOW);
    digitalWrite(R11,LOW); 
    

    digitalWrite(G1,LOW);
    digitalWrite(G11,LOW); 
    


}

        else if(digitalRead(D3)== LOW && digitalRead(D2)==LOW && digitalRead(D1)==LOW && digitalRead(D0)==HIGH)

{//front
    digitalWrite(L1,HIGH);
    digitalWrite(L11,LOW);
    digitalWrite(R1,HIGH);
    digitalWrite(R11,LOW); 
    

    digitalWrite(G1,LOW);
    digitalWrite(G11,LOW);   
    
    
}
     else if(digitalRead(D3)== LOW && digitalRead(D2)==LOW && digitalRead(D1)==HIGH && digitalRead(D0)==LOW)
//back
{
   digitalWrite(L1,LOW);
    digitalWrite(L11,HIGH);
    digitalWrite(R1,LOW);
    digitalWrite(R11,HIGH); 
    

    digitalWrite(G1,LOW);
    digitalWrite(G11,LOW);   
    
    
    
}
        else if(digitalRead(D3)== LOW && digitalRead(D2)==LOW && digitalRead(D1)==HIGH && digitalRead(D0)==HIGH)
//left
{
  digitalWrite(L1,HIGH);
    digitalWrite(L11,LOW);
    digitalWrite(R1,LOW);
    digitalWrite(R11,HIGH); 
    

    digitalWrite(G1,LOW);
    digitalWrite(G11,LOW);   
    
 
}
     else if(digitalRead(D3)== LOW && digitalRead(D2)==HIGH && digitalRead(D1)==LOW && digitalRead(D0)==LOW)
{//right
    digitalWrite(L1,LOW);
    digitalWrite(L11,HIGH);
    digitalWrite(R1,HIGH);
    digitalWrite(R11,LOW); 
    

    digitalWrite(G1,LOW);
    digitalWrite(G11,LOW);  
    
    
    
}
     else if(digitalRead(D3)== LOW && digitalRead(D2)==HIGH && digitalRead(D1)==LOW && digitalRead(D0)==HIGH)
{//gun motor right
  digitalWrite(L1,LOW);
    digitalWrite(L11,LOW);
    digitalWrite(R1,LOW);
    digitalWrite(R11,LOW); 
    

    digitalWrite(G1,HIGH);
    digitalWrite(G11,LOW);   
}
     else if(digitalRead(D3)== LOW && digitalRead(D2)==HIGH && digitalRead(D1)==HIGH && digitalRead(D0)==LOW)
{//gun motor left
   digitalWrite(L1,LOW);
    digitalWrite(L11,LOW);
    digitalWrite(R1,LOW);
    digitalWrite(R11,LOW); 
    

    digitalWrite(G1,LOW);
    digitalWrite(G11,HIGH);   
}

//Author: Kartikeya P Malimath
  
  
       else if(digitalRead(D3)== LOW && digitalRead(D2)==HIGH && digitalRead(D1)==HIGH && digitalRead(D0)==HIGH)
{//stop
 digitalWrite(L1,LOW);
    digitalWrite(L11,LOW);
    digitalWrite(R1,LOW);
    digitalWrite(R11,LOW); 
    

    digitalWrite(G1,LOW);
    digitalWrite(G11,LOW);   
}   
          else 
{//stop
  digitalWrite(L1,LOW);
    digitalWrite(L11,LOW);
    digitalWrite(R1,LOW);
    digitalWrite(R11,LOW); 
    

    digitalWrite(G1,LOW);
    digitalWrite(G11,LOW);   
} 
}
