#include <stdio.h>
#include "write_file.h"

int main(int argc, char *argv[])
{
  if(argc == 0){ printf("Error\n"); return(-1); }

  int incomes[256], payments[256];
  int finish;
  int count = 0, i = 1;

  while(1){
    printf("Input your income No.%d > ", i);
     scanf("%d", &incomes[i-1]);

    count++;

    printf("If you finish to input incomes, input '0'.\n");
    printf("Otherwise it input other number.\n");
    printf("Input > ");
     scanf("%d", &finish);

    if(finish == 0){ break; }

    i++;
  }

  int j, total_in = 0;

  for(j = 0; j < count; j++){
     total_in = total_in + incomes[j];
  } 

  i = 1, finish = 1, count = 0; 

  while(1){
    printf("Input your payment No.%d > ", i);
     scanf("%d", &payments[i-1]);

    count++;

    printf("If you finish to input incomes, input '0'.\n");
    printf("Otherwise it input other number.\n");
    printf("Input > ");
     scanf("%d", &finish);

    if(finish == 0){ break; }

    i++;
  }
  
  int total_out = 0;

  for(j = 0; j < count; j++){
     total_out = total_out + payments[j];
  } 

  write_file(argv[0], total_in, total_out);

  printf("Finish.\n");
 
  return(0);
}
