#include <LedControlMS.h>

LedControl lc=LedControl(12,11,10, 1);
  int su=0;
  int giu=0;
  int dx=0;
  int sx=0;
  int state=0;
  int sez=3;
  int x_snake=4;
  int y_snake=4;
  int y1=10;
  int y2=10;
  int x1=10;
  int x2=10;
  int x3=10;
  int y3=10;
  int x4=10;
  int y4=10;
  int x5=10;
  int y5=10;
  int x6=10;
  int y6=10;
  int x7=10;
  int y7=10;
  int x8=10;
  int y8=10;
  int x9=10;
  int y9=10;
  int x10=10;
  int y10=10;
  int x11=10;
  int y11=10;
  int x12=10;
  int y12=10;
  int x13=10;
  int y13=10;
  int x14=10;
  int y14=10;
  int x15=10;
  int y15=10;
  int x16=10;
  int y16=10;
  int x17=10;
  int y17=10;
  int x18=10;
  int y18=10;
  int x19=10;
  int y19=10;
  int y_pre=10;
  int x_pre=10;
  int y_pre2=10;
  int x_pre2=10;
  int x_pre3=10;
  int y_pre3=10;
  int x_pre4=10;
  int y_pre4=10;
  int x_pre5=10;
  int y_pre5=10;
  int x_pre6=10;
  int y_pre6=10;
  int x_pre7=10;
  int y_pre7=10;
  int x_pre8=10;
  int y_pre8=10;
  int x_pre9=10;
  int y_pre9=10;
  int x_pre10=10;
  int y_pre10=10;
  int x_pre11=10;
  int y_pre11=10;
  int x_pre12=10;
  int y_pre12=10;
  int x_pre13=10;
  int y_pre13=10;
  int x_pre14=10;
  int y_pre14=10;
  int x_pre15=10;
  int y_pre15=10;
  int x_pre16=10;
  int y_pre16=10;
  int x_pre17=10;
  int y_pre17=10;
  int x_pre18=10;
  int y_pre18=10;
  int x_pre19=10;
  int y_pre19=10;
  int direz=0;
  int clock=150;
  int spe=6;
  int rany=0;
  int ranx=0;
  int s=2;
  int g=5;
  int d=4;
  int ss=3;
  int pt=0;
  
  
  
  String carat="";
  int row=0;
  int scroll=0;
  int cal=0;
  String msg[]="";
  char text;
  int lungth;
  
void setup() {
  
  Serial.begin(9600);
  Serial.println("Inizializzazione");
  
 
 pinMode(2,INPUT);
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,15);
  /* and clear the display */
  lc.clearDisplay(0);
  tone(spe, 196,280);delay(300);
  tone(spe, 196,280);delay(300);
  tone(spe, 196,280);delay(300);
  tone(spe, 155.6);delay(225);
  tone(spe, 246.9);delay(75);
  tone(spe, 196);delay(300);
  tone(spe, 155.6);delay(225);
  tone(spe, 246.9);delay(75);
  tone(spe, 196,500);
  
  randomSeed(analogRead(0));
  ranx= random(7);
  rany = random(7);
  
  
  Serial.print("Pronto");
  
  
  
 lc.clearDisplay(0);
}


void loop(){
 
  
  snake();
  
  
}


void dead(){
  if(x_snake==x1 && y_snake==y1 || x_snake==x2 && y_snake==y2 || x_snake==x3 && y_snake==y3 || x_snake==x4 && y_snake==y4 || x_snake==x5 && y_snake==y5 || x_snake==x6 && y_snake==y6 || x_snake==x7 && y_snake==y7 || x_snake==x8 && y_snake==y8 || x_snake==x9 && y_snake==y9 || x_snake==x10 && y_snake==y10 || x_snake==x11 && y_snake==y11 || x_snake==x12 && y_snake==y12 || x_snake==x13 && y_snake==y13 || x_snake==x14 && y_snake==y14 || x_snake==x15 && y_snake==y15 || x_snake==x16 && y_snake==y16 || x_snake==x17 && y_snake==y17 || x_snake==x18 && y_snake==y18 || x_snake==x19 && y_snake==y19){
    loser();
  }
}
  



void snake(){                                                         //GIOCO DI SNAKE
  
       
         
  sx=1-digitalRead(s);
  giu=digitalRead(g);
  dx=1+digitalRead(d);
  su=2+digitalRead(ss);
  
if(su==3){
  tone(spe, 440,20);
  direz=3;
  
}
  else{
      if(giu==1){
        tone(spe, 440,20);
         direz=1;
        }
        else{
          if(dx==2){
            tone(spe, 440,20);
            direz=2;
          }
            else{
              if(sx==0){
                tone(spe, 440,20);
                direz=0;
              }
               else{
                  return;
                }}}}



  
  switch(direz){                             
    case 3:                                 //UP
     while(1){
       
          
                      
         /*direz=digitalRead(2);                
          if(direz>=1){
               return;
             }*/
            sx=1-digitalRead(s);
            giu=digitalRead(g);
            dx=1+digitalRead(d);
            su=2+digitalRead(ss);
          
                
                    if(dx==2){
                      tone(spe, 440,20);
                      direz=2;
                      return;
                    }
                      else{
                        if(sx==0){
                          tone(spe, 440,20);
                          direz=0;
                          return;
                        }
                        
                        
                        
                         }
          
          segment();
          
          
          y_snake = y_snake+1;
          
          if(y_snake>=8){
        y_snake=0;
        } 
          mangia_cibo();
          dead();
          
          delay(clock); 
         }
      
      
      case 1:                                 //DOWN
     while(1){
         
                      
         /*direz=digitalRead(2);                
          if(direz>=1){
               return;
             }*/
            sx=1-digitalRead(s);
            giu=digitalRead(g);
            dx=1+digitalRead(d);
            su=2+digitalRead(ss);
          
                
                    if(dx==2){
                      tone(spe, 440,20);
                      Serial.print("ci sono");
                      direz=2;
                      return;
                    }
                      else{
                        if(sx==0){
                          tone(spe, 440,20);
                          direz=0;
                          return;
                        }
                         }
          
          segment();
         
          y_snake = y_snake-1;
           if(y_snake==-1){
        y_snake=7;
        } 
          mangia_cibo();
          dead();
          delay(clock); 
         }
      
      
      
         
         
         
    case 2:                                        //DESTRA
      while(1){
        
          sx=1-digitalRead(s);
          giu=digitalRead(g);
          dx=1+digitalRead(d);
          su=2+digitalRead(ss);
          if(su==3){
            tone(spe, 440,20);
            direz=3;
            return;
          }
            else{
                if(giu==1){
                  
                  tone(spe, 440,20);
                   direz=1;
                   return;
                  }
                   } 
            
          segment();
          
          x_snake = x_snake-1;
          if(x_snake==-1){
          x_snake=7;
        }
          mangia_cibo();
          dead();
          delay(clock);
            }
            
            
      case 0:                                                  //SINISTRA
      while(1){
        
          sx=1-digitalRead(s);
          giu=digitalRead(g);
          dx=1+digitalRead(d);
          su=2+digitalRead(ss);
          if(su==3){
            tone(spe, 440,20);
            direz=3;
            return;
          }
            else{
                if(giu==1){
                  tone(spe, 440,20);
                   direz=1;
                   return;
                  }
                   
                         } 
            segment();
          
          
          x_snake = x_snake+1;
          if(x_snake>=8){
          x_snake=0;
        }
          mangia_cibo();
          dead();
          
          delay(clock);
            }
      
  }
    
}
  


void mangia_cibo(){

if(ranx==x_snake & rany==y_snake){
            ++pt;
            
            ranx = random(7);
            rany = random(7);
            tone(spe, 130,300);
          }
}
void(* Riavvia)(void) = 0;
void winner(){
  scrivitesto("you win",7);
  lc.clearDisplay(0);
  Riavvia();
  
}

void loser(){
  scrivitesto("game over",9);
  lc.clearDisplay(0);
  Riavvia();
}

void segment(){
  if(pt==0){
          lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
          
         lc.setLed(0,x_snake,y_snake,true);
         x_pre=x_snake;
         y_pre=y_snake;
          
  }
   else if(pt==1){
          lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
          
         lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x_pre2=x1;
         y_pre2=y1;
         
     
  }
   else if(pt==2){
          lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
          
         lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x_pre3=x2;
         y_pre3=y2;
       
  }
    else if(pt==3){
          lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
          
         lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x_pre4=x3;
         y_pre4=y3;
        
          
         
  }
  else if(pt==4){
          lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
          
         lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x_pre5=x4;
         y_pre5=y4;
         
  }
  else if(pt==5){
          lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
          
         lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x_pre6=x5;
         y_pre6=y5;
         

  }
  else if(pt==6){
          lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
          
         lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x_pre7=x6;
         y_pre7=y6;
         

         
  }
  else if(pt==7)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x_pre7=x6;
         y_pre7=y6;
  }
  else if(pt==8)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x_pre8=x7;
         y_pre8=y7;
  }
   else if(pt==9)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x_pre9=x8;
         y_pre9=y8;
  }
     else if(pt==10)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x_pre10=x9;
         y_pre10=y9;
  }
       else if(pt==11)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x_pre11=x10;
         y_pre11=y10;
  }
        else if(pt==12)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x12=x_pre12;
         y12=y_pre12;
         x_pre12=x11;
         y_pre12=y11;

         lc.setLed(0,x12,y12,true);
         x_pre12=x11;
         y_pre12=y11;
  }
          else if(pt==13)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x12=x_pre12;
         y12=y_pre12;
         x_pre12=x11;
         y_pre12=y11;

         lc.setLed(0,x12,y12,true);
         x13=x_pre13;
         y13=y_pre13;
         x_pre13=x12;
         y_pre13=y12;

         lc.setLed(0,x13,y13,true);
         x_pre13=x12;
         y_pre13=y12;
  }
  else if(pt==14)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x12=x_pre12;
         y12=y_pre12;
         x_pre12=x11;
         y_pre12=y11;

         lc.setLed(0,x12,y12,true);
         x13=x_pre13;
         y13=y_pre13;
         x_pre13=x12;
         y_pre13=y12;

         lc.setLed(0,x13,y13,true);
         x14=x_pre14;
         y14=y_pre14;
         x_pre14=x13;
         y_pre14=y13;

         lc.setLed(0,x14,y14,true);
         x_pre14=x13;
         y_pre14=y13;
  }
   else if(pt==15)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x12=x_pre12;
         y12=y_pre12;
         x_pre12=x11;
         y_pre12=y11;

         lc.setLed(0,x12,y12,true);
         x13=x_pre13;
         y13=y_pre13;
         x_pre13=x12;
         y_pre13=y12;

         lc.setLed(0,x13,y13,true);
         x14=x_pre14;
         y14=y_pre14;
         x_pre14=x13;
         y_pre14=y13;

         lc.setLed(0,x14,y14,true);
         x15=x_pre15;
         y15=y_pre15;
         x_pre15=x14;
         y_pre15=y14;

         lc.setLed(0,x15,y15,true);
         x_pre15=x14;
         y_pre15=y14;
  }
   else if(pt==16)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x12=x_pre12;
         y12=y_pre12;
         x_pre12=x11;
         y_pre12=y11;

         lc.setLed(0,x12,y12,true);
         x13=x_pre13;
         y13=y_pre13;
         x_pre13=x12;
         y_pre13=y12;

         lc.setLed(0,x13,y13,true);
         x14=x_pre14;
         y14=y_pre14;
         x_pre14=x13;
         y_pre14=y13;

         lc.setLed(0,x14,y14,true);
         x15=x_pre15;
         y15=y_pre15;
         x_pre15=x14;
         y_pre15=y14;

         lc.setLed(0,x15,y15,true);
         x16=x_pre16;
         y16=y_pre16;
         x_pre16=x15;
         y_pre16=y15;

         lc.setLed(0,x16,y16,true);
         x_pre16=x15;
         y_pre16=y15;
  }
    else if(pt==17)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x12=x_pre12;
         y12=y_pre12;
         x_pre12=x11;
         y_pre12=y11;

         lc.setLed(0,x12,y12,true);
         x13=x_pre13;
         y13=y_pre13;
         x_pre13=x12;
         y_pre13=y12;

         lc.setLed(0,x13,y13,true);
         x14=x_pre14;
         y14=y_pre14;
         x_pre14=x13;
         y_pre14=y13;

         lc.setLed(0,x14,y14,true);
         x15=x_pre15;
         y15=y_pre15;
         x_pre15=x14;
         y_pre15=y14;

         lc.setLed(0,x15,y15,true);
         x16=x_pre16;
         y16=y_pre16;
         x_pre16=x15;
         y_pre16=y15;

         lc.setLed(0,x16,y16,true);
         x17=x_pre17;
         y17=y_pre17;
         x_pre17=x16;
         y_pre17=y16;

          lc.setLed(0,x17,y17,true);
         x_pre17=x16;
         y_pre17=y16;
  }
  else if(pt==18)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x12=x_pre12;
         y12=y_pre12;
         x_pre12=x11;
         y_pre12=y11;

         lc.setLed(0,x12,y12,true);
         x13=x_pre13;
         y13=y_pre13;
         x_pre13=x12;
         y_pre13=y12;

         lc.setLed(0,x13,y13,true);
         x14=x_pre14;
         y14=y_pre14;
         x_pre14=x13;
         y_pre14=y13;

         lc.setLed(0,x14,y14,true);
         x15=x_pre15;
         y15=y_pre15;
         x_pre15=x14;
         y_pre15=y14;

         lc.setLed(0,x15,y15,true);
         x16=x_pre16;
         y16=y_pre16;
         x_pre16=x15;
         y_pre16=y15;

         lc.setLed(0,x16,y16,true);
         x17=x_pre17;
         y17=y_pre17;
         x_pre17=x16;
         y_pre17=y16;

          lc.setLed(0,x17,y17,true);
         x18=x_pre18;
         y18=y_pre18;
         x_pre18=x17;
         y_pre18=y17;

           lc.setLed(0,x18,y18,true);
         x_pre18=x17;
         y_pre18=y17;
  }
    else if(pt==19)
  {
    lc.clearDisplay(0); 
          lc.setLed(0,ranx,rany,true);
    lc.setLed(0,x_snake,y_snake,true);
         x1=x_pre;
         y1=y_pre;
         x_pre=x_snake;
         y_pre=y_snake;
         
         lc.setLed(0,x1,y1,true);
         x2=x_pre2;
         y2=y_pre2;
         x_pre2=x1;
         y_pre2=y1;
          
         lc.setLed(0,x2,y2,true);
         x3=x_pre3;
         y3=y_pre3; 
         x_pre3=x2;
         y_pre3=y2;
         
          
         lc.setLed(0,x3,y3,true);
         x4=x_pre4;
         y4=y_pre4;
         x_pre4=x3;
         y_pre4=y3;
          
          
         lc.setLed(0,x4,y4,true);
         x5=x_pre5;
         y5=y_pre5;
         x_pre5=x4;
         y_pre5=y4;

         lc.setLed(0,x5,y5,true);
         x6=x_pre6;
         y6=y_pre6;
         x_pre6=x5;
         y_pre6=y5;

         lc.setLed(0,x6,y6,true);
         x7=x_pre7;
         y7=y_pre7;
         x_pre7=x6;
         y_pre7=y6;
         
         lc.setLed(0,x7,y7,true);
         x8=x_pre8;
         y8=y_pre8;
         x_pre8=x7;
         y_pre8=y7;

         lc.setLed(0,x8,y8,true);
         x9=x_pre9;
         y9=y_pre9;
         x_pre9=x8;
         y_pre9=y8;

         lc.setLed(0,x9,y9,true);
         x10=x_pre10;
         y10=y_pre10;
         x_pre10=x9;
         y_pre10=y9;

         lc.setLed(0,x10,y10,true);
         x11=x_pre11;
         y11=y_pre11;
         x_pre11=x10;
         y_pre11=y10;

         lc.setLed(0,x11,y11,true);
         x12=x_pre12;
         y12=y_pre12;
         x_pre12=x11;
         y_pre12=y11;

         lc.setLed(0,x12,y12,true);
         x13=x_pre13;
         y13=y_pre13;
         x_pre13=x12;
         y_pre13=y12;

         lc.setLed(0,x13,y13,true);
         x14=x_pre14;
         y14=y_pre14;
         x_pre14=x13;
         y_pre14=y13;

         lc.setLed(0,x14,y14,true);
         x15=x_pre15;
         y15=y_pre15;
         x_pre15=x14;
         y_pre15=y14;

         lc.setLed(0,x15,y15,true);
         x16=x_pre16;
         y16=y_pre16;
         x_pre16=x15;
         y_pre16=y15;

         lc.setLed(0,x16,y16,true);
         x17=x_pre17;
         y17=y_pre17;
         x_pre17=x16;
         y_pre17=y16;

          lc.setLed(0,x17,y17,true);
         x18=x_pre18;
         y18=y_pre18;
         x_pre18=x17;
         y_pre18=y17;

           lc.setLed(0,x18,y18,true);
         x19=x_pre19;
         y19=y_pre19;
         x_pre19=x18;
         y_pre19=y18;
         
         lc.setLed(0,x19,y19,true);
         x_pre19=x18;
         y_pre19=y18;
  }
  else if(pt==20){
    winner();
  }
}



void scrivitesto(String msg,int lungth){                                  //FUNZIONE PER SCRIVERE TESTO CHE SCORRE--------->scrivitesto("messaggio",numero caratteri)

lungth-=1;

 int lungth_tot=lungth*8; 
 while(g!=lungth_tot){
 unsigned char lett[37][5]= 
 {
  {B11100000,B01010000,B01001000,B01010000,B11100000}, //A
  {B01010000,B10101000,B10101000,B10101000,B11111000}, //B
  {B10001000,B10001000,B10001000,B10001000,B01110000}, //C
  {B01110000,B10001000,B10001000,B10001000,B11111000}, //D
  {B10001000,B10001000,B10101000,B10101000,B11111000}, //E
  {B00001000,B00001000,B00101000,B00101000,B11111000}, //F
  {B11101000,B10101000,B10001000,B10001000,B01110000}, //G
  {B11111000,B00100000,B00100000,B00100000,B11111000}, //H.
  {B00000000,B10001000,B11111000,B10001000,B00000000}, //I
  {B00001000,B01111000,B10001000,B10001000,B01001000}, //J
  {B10001000,B01010000,B00100000,B00100000,B11111000}, //K
  {B00000000,B10000000,B10000000,B11111000,B00000000}, //L
  {B11111000,B00010000,B00100000,B00010000,B11111000}, //M
  {B11111000,B01000000,B00100000,B00010000,B11111000}, //N
  {B01110000,B10001000,B10001000,B10001000,B01110000}, //O
  {B00010000,B00101000,B00101000,B00101000,B11111000}, //P
  {B10110000,B01001000,B10101000,B10001000,B01110000}, //Q
  {B11010000,B00101000,B00101000,B00101000,B11111000}, //R
  {B01001000,B10101000,B10101000,B10101000,B10010000}, //S
  {B00001000,B00001000,B11111000,B00001000,B00001000}, //T
  {B01111000,B10000000,B10000000,B10000000,B01111000}, //U
  {B00111000,B01000000,B10000000,B01000000,B00111000}, //V
  {B11111000,B01000000,B00100000,B01000000,B11111000}, //W
  {B10001000,B01010000,B00100000,B01010000,B10001000}, //X
  {B00001000,B00010000,B11100000,B00010000,B00001000}, //Y
  {B11111111,B11111111,B00001110,B00011100,B00111000}, //Z
  {B01110000,B10011000,B10101000,B11001000,B01110000}, //0.
  {B00000000,B10000000,B11111000,B10001000,B00000000}, //1
  {B10010000,B10101000,B10101000,B10101000,B11001000}, //2
  {B01010000,B10101000,B10101000,B10001000,B10001000}, //3
  {B01000000,B11111000,B01001000,B01010000,B01100000}, //4
  {B01001000,B10101000,B10101000,B10101000,B10111000}, //5
  {B01001000,B10101000,B10101000,B10101000,B01110000}, //6
  {B00011000,B00101000,B01001000,B10001000,B00001000}, //7
  {B01010000,B10101000,B10101000,B10101000,B01010000}, //8
  {B01111000,B10101000,B10101000,B10101000,B10010000}, //9
  {B00000000,B00000000,B00000000,B00000000,B00000000}, //spazio vuoto
  };

int k=0;
int cont=0;
int i=0;
   
  for(i=0;i<=lungth;i++){
            carat=""; 
            carat+=msg[k];

          if(carat=="a"){
            lc.setRow(0,row-5,lett[0][0]);
            lc.setRow(0,row-4,lett[0][1]);
            lc.setRow(0,row-3,lett[0][2]);
            lc.setRow(0,row-2,lett[0][3]);
            lc.setRow(0,row-1,lett[0][4]);
            
            
          }
            
            else{
             if (carat=="b"){
            lc.setRow(0,row-5,lett[1][0]);
            lc.setRow(0,row-4,lett[1][1]);
            lc.setRow(0,row-3,lett[1][2]);
            lc.setRow(0,row-2,lett[1][3]);
            lc.setRow(0,row-1,lett[1][4]);
            
          }
            else{
              
              if (carat=="c"){
            lc.setRow(0,row-5,lett[2][0]);
            lc.setRow(0,row-4,lett[2][1]);
            lc.setRow(0,row-3,lett[2][2]);
            lc.setRow(0,row-2,lett[2][3]);
            lc.setRow(0,row-1,lett[2][4]);
          }
            else{
              
              if (carat=="d"){
            lc.setRow(0,row-5,lett[3][0]);
            lc.setRow(0,row-4,lett[3][1]);
            lc.setRow(0,row-3,lett[3][2]);
            lc.setRow(0,row-2,lett[3][3]);
            lc.setRow(0,row-1,lett[3][4]);
          }
            else{
              
              if (carat=="e"){
            lc.setRow(0,row-5,lett[4][0]);
            lc.setRow(0,row-4,lett[4][1]);
            lc.setRow(0,row-3,lett[4][2]);
            lc.setRow(0,row-2,lett[4][3]);
            lc.setRow(0,row-1,lett[4][4]);
          }
            else{
              if (carat=="f"){
            lc.setRow(0,row-5,lett[5][0]);
            lc.setRow(0,row-4,lett[5][1]);
            lc.setRow(0,row-3,lett[5][2]);
            lc.setRow(0,row-2,lett[5][3]);
            lc.setRow(0,row-1,lett[5][4]);
          }
            else{
              if (carat=="g"){
            lc.setRow(0,row-5,lett[6][0]);
            lc.setRow(0,row-4,lett[6][1]);
            lc.setRow(0,row-3,lett[6][2]);
            lc.setRow(0,row-2,lett[6][3]);
            lc.setRow(0,row-1,lett[6][4]);
          }
            else{
              if (carat=="h"){
            lc.setRow(0,row-5,lett[7][0]);
            lc.setRow(0,row-4,lett[7][1]);
            lc.setRow(0,row-3,lett[7][2]);
            lc.setRow(0,row-2,lett[7][3]);
            lc.setRow(0,row-1,lett[7][4]);
          }
            else{
              if (carat=="i"){
            lc.setRow(0,row-5,lett[8][0]);
            lc.setRow(0,row-4,lett[8][1]);
            lc.setRow(0,row-3,lett[8][2]);
            lc.setRow(0,row-2,lett[8][3]);
            lc.setRow(0,row-1,lett[8][4]);
          }
          else{
             if (carat=="j"){
            lc.setRow(0,row-5,lett[9][0]);
            lc.setRow(0,row-4,lett[9][1]);
            lc.setRow(0,row-3,lett[9][2]);
            lc.setRow(0,row-2,lett[9][3]);
            lc.setRow(0,row-1,lett[9][4]);
          }
          else{
             if (carat=="k"){
            lc.setRow(0,row-5,lett[10][0]);
            lc.setRow(0,row-4,lett[10][1]);
            lc.setRow(0,row-3,lett[10][2]);
            lc.setRow(0,row-2,lett[10][3]);
            lc.setRow(0,row-1,lett[10][4]);
          }
          
            else{
             if (carat=="l"){
            lc.setRow(0,row-5,lett[11][0]);
            lc.setRow(0,row-4,lett[11][1]);
            lc.setRow(0,row-3,lett[11][2]);
            lc.setRow(0,row-2,lett[11][3]);
            lc.setRow(0,row-1,lett[11][4]);
          }
            
            
            
            else{
              if (carat=="m"){
            lc.setRow(0,row-5,lett[12][0]);
            lc.setRow(0,row-4,lett[12][1]);
            lc.setRow(0,row-3,lett[12][2]);
            lc.setRow(0,row-2,lett[12][3]);
            lc.setRow(0,row-1,lett[12][4]);
          }
            else{
              if (carat=="n"){
            lc.setRow(0,row-5,lett[13][0]);
            lc.setRow(0,row-4,lett[13][1]);
            lc.setRow(0,row-3,lett[13][2]);
            lc.setRow(0,row-2,lett[13][3]);
            lc.setRow(0,row-1,lett[13][4]);
          }
            else{
              if (carat=="o"){
            lc.setRow(0,row-5,lett[14][0]);
            lc.setRow(0,row-4,lett[14][1]);
            lc.setRow(0,row-3,lett[14][2]);
            lc.setRow(0,row-2,lett[14][3]);
            lc.setRow(0,row-1,lett[14][4]);
          }
            else{
              if (carat=="p"){
            lc.setRow(0,row-5,lett[15][0]);
            lc.setRow(0,row-4,lett[15][1]);
            lc.setRow(0,row-3,lett[15][2]);
            lc.setRow(0,row-2,lett[15][3]);
            lc.setRow(0,row-1,lett[15][4]);
          }
            else{
              if (carat=="q"){
            lc.setRow(0,row-5,lett[16][0]);
            lc.setRow(0,row-4,lett[16][1]);
            lc.setRow(0,row-3,lett[16][2]);
            lc.setRow(0,row-2,lett[16][3]);
            lc.setRow(0,row-1,lett[16][4]);
          }
            else{
              if (carat=="r"){
            lc.setRow(0,row-5,lett[17][0]);
            lc.setRow(0,row-4,lett[17][1]);
            lc.setRow(0,row-3,lett[17][2]);
            lc.setRow(0,row-2,lett[17][3]);
            lc.setRow(0,row-1,lett[17][4]);
          }
            else{
             if (carat=="s"){
            lc.setRow(0,row-5,lett[18][0]);
            lc.setRow(0,row-4,lett[18][1]);
            lc.setRow(0,row-3,lett[18][2]);
            lc.setRow(0,row-2,lett[18][3]);
            lc.setRow(0,row-1,lett[18][4]);
          }
            else{
              if (carat=="t"){
            lc.setRow(0,row-5,lett[19][0]);
            lc.setRow(0,row-4,lett[19][1]);
            lc.setRow(0,row-3,lett[19][2]);
            lc.setRow(0,row-2,lett[19][3]);
            lc.setRow(0,row-1,lett[19][4]);
          }
            else{
              if (carat=="u"){
            lc.setRow(0,row-5,lett[20][0]);
            lc.setRow(0,row-4,lett[20][1]);
            lc.setRow(0,row-3,lett[20][2]);
            lc.setRow(0,row-2,lett[20][3]);
            lc.setRow(0,row-1,lett[20][4]);
          }
          else{
              if (carat=="v"){
            lc.setRow(0,row-5,lett[21][0]);
            lc.setRow(0,row-4,lett[21][1]);
            lc.setRow(0,row-3,lett[21][2]);
            lc.setRow(0,row-2,lett[21][3]);
            lc.setRow(0,row-1,lett[21][4]);
          }
          else{
              if (carat=="w"){
            lc.setRow(0,row-5,lett[22][0]);
            lc.setRow(0,row-4,lett[22][1]);
            lc.setRow(0,row-3,lett[22][2]);
            lc.setRow(0,row-2,lett[22][3]);
            lc.setRow(0,row-1,lett[22][4]);
          }
          else{
              if (carat=="x"){
            lc.setRow(0,row-5,lett[23][0]);
            lc.setRow(0,row-4,lett[23][1]);
            lc.setRow(0,row-3,lett[23][2]);
            lc.setRow(0,row-2,lett[23][3]);
            lc.setRow(0,row-1,lett[23][4]);
          }
          else{
              if (carat=="y"){
            lc.setRow(0,row-5,lett[24][0]);
            lc.setRow(0,row-4,lett[24][1]);
            lc.setRow(0,row-3,lett[24][2]);
            lc.setRow(0,row-2,lett[24][3]);
            lc.setRow(0,row-1,lett[24][4]);
          }
          else{
              if (carat=="z"){
            lc.setRow(0,row-5,lett[25][0]);
            lc.setRow(0,row-4,lett[25][1]);
            lc.setRow(0,row-3,lett[25][2]);
            lc.setRow(0,row-2,lett[25][3]);
            lc.setRow(0,row-1,lett[25][4]);
          }
          else{
              if (carat=="0"){
            lc.setRow(0,row-5,lett[26][0]);
            lc.setRow(0,row-4,lett[26][1]);
            lc.setRow(0,row-3,lett[26][2]);
            lc.setRow(0,row-2,lett[26][3]);
            lc.setRow(0,row-1,lett[26][4]);
          }
          else{
              if (carat=="1"){
            lc.setRow(0,row-5,lett[27][0]);
            lc.setRow(0,row-4,lett[27][1]);
            lc.setRow(0,row-3,lett[27][2]);
            lc.setRow(0,row-2,lett[27][3]);
            lc.setRow(0,row-1,lett[27][4]);
          }
          else{
              if (carat=="2"){
            lc.setRow(0,row-5,lett[28][0]);
            lc.setRow(0,row-4,lett[28][1]);
            lc.setRow(0,row-3,lett[28][2]);
            lc.setRow(0,row-2,lett[28][3]);
            lc.setRow(0,row-1,lett[28][4]);
          }
          else{
              if (carat=="3"){
            lc.setRow(0,row-5,lett[29][0]);
            lc.setRow(0,row-4,lett[29][1]);
            lc.setRow(0,row-3,lett[29][2]);
            lc.setRow(0,row-2,lett[29][3]);
            lc.setRow(0,row-1,lett[29][4]);
          }
          else{
              if (carat=="4"){
            lc.setRow(0,row-5,lett[30][0]);
            lc.setRow(0,row-4,lett[30][1]);
            lc.setRow(0,row-3,lett[30][2]);
            lc.setRow(0,row-2,lett[30][3]);
            lc.setRow(0,row-1,lett[30][4]);
          }
          else{
              if (carat=="5"){
            lc.setRow(0,row-5,lett[31][0]);
            lc.setRow(0,row-4,lett[31][1]);
            lc.setRow(0,row-3,lett[31][2]);
            lc.setRow(0,row-2,lett[31][3]);
            lc.setRow(0,row-1,lett[31][4]);
          }
          else{
              if (carat=="6"){
            lc.setRow(0,row-5,lett[32][0]);
            lc.setRow(0,row-4,lett[32][1]);
            lc.setRow(0,row-3,lett[32][2]);
            lc.setRow(0,row-2,lett[32][3]);
            lc.setRow(0,row-1,lett[32][4]);
          }
          else{
              if (carat=="7"){
            lc.setRow(0,row-5,lett[33][0]);
            lc.setRow(0,row-4,lett[33][1]);
            lc.setRow(0,row-3,lett[33][2]);
            lc.setRow(0,row-2,lett[33][3]);
            lc.setRow(0,row-1,lett[33][4]);
          }
          else{
              if (carat=="8"){
            lc.setRow(0,row-5,lett[34][0]);
            lc.setRow(0,row-4,lett[34][1]);
            lc.setRow(0,row-3,lett[34][2]);
            lc.setRow(0,row-2,lett[34][3]);
            lc.setRow(0,row-1,lett[34][4]);
          }
          else{
              if (carat=="9"){
            lc.setRow(0,row-5,lett[35][0]);
            lc.setRow(0,row-4,lett[35][1]);
            lc.setRow(0,row-3,lett[35][2]);
            lc.setRow(0,row-2,lett[35][3]);
            lc.setRow(0,row-1,lett[35][4]);
          }
          else{
          if (carat==""){
            
            
            
          }
          }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
  
  
        

        k+=1;
        
        row-=6;
        
    }

delay(50);
  cal=cal+1;
  row=cal;
  /*if(row>=lungth_tot){
    
  cal=0;}*/
 lc.clearDisplay(0);
 g+=1;
    }
    
}




