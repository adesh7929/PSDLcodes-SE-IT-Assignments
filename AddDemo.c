/*
 * File:   AddDemo.c
 * Author: shri
 *
 * Created on 14 May 2023, 19:44
 */

#include <xc.h>

void main(void) 
{
    unsigned int sum=0;
    unsigned int arr[5];
    TRISB=0;
    LATB=0;
    
    arr[5]={1,1,1,1,1};
    for(unsigned int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    PORTB=sum;
//    i=0x04;
//    j=0x05;
//    x=i+j;
//    PORTB=x;
//    PORTC=i;
//    PORTD=j;
    
    return;
}