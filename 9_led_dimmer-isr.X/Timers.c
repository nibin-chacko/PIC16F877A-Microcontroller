#include<xc.h>

void init_timer2(void)
{
    
    /*selecting scale as 1:1*/
    T2CKPS0 = 0;
    T2CKPS1 = 0;
    
    /*The timer interrupt is enabled*/
    
    TMR2IE = 1;
    
  
   
    /*Loading the preload register as 250*/
    PR2 = 250;
    /*Switching on timer 2*/
    TMR2ON = 1;
}
