#include <stdio.h>

int main(void)
{
  int i;
  int total = 0;
  int payments[5];
  
  payments[0] = 15;
  payments[1] = 5;
  payments[2] = 20;
  payments[3] = 15;
  payments[4] = 45;  

  for(i = 0; i < 5; i++){
     total = total + payments[i];
  }

  if(total == 100){
    printf("Success\n");
  }

}
