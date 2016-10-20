#include<stdio.h>
#include "average.h"

int average(int payments[]);


int average(int payments[])
{
 int i,x; 
 x = 0;
 for(i = 0;i < 5;i++){
    x = x + payments[i];
    }
 x = x / 5;
 return x;
}

