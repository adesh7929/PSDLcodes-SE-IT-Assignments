/*
 * File:   ArrayAddition.c
 * Author: shri
 *
 * Created on 15 May 2023, 19:16
 */


#include <xc.h>

void main(void) 
{
    unsigned int sum = 0;
    unsigned int arr[5] = {1,1,1,1,1};
    TRISB=0;
    LATB=0;
    for(unsigned int i=0;i<5;i++)
    {
        sum = sum + arr[i] ;
    }
    PORTB = sum;
    return;
}
