#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc == 0){ printf("Error\n"); return(-1); }

  int incomes[256], payments[256];
  int finish, i = 1;

  while(1){
    printf("Input your income No.%d > ", i);
     scanf("%d", &incomes[i-1]);

    printf("If you finish to input incomes, input '0'.\n");
    printf("Otherwise it input other number.\n");
    printf("Input > ");
     scanf("%d", &finish);

    if(finish == 0){ break; }

    i++;
  }

  i = 1, finish = 1; 

  while(1){
    printf("Input your payment No.%d > ", i);
     scanf("%d", &payments[i-1]);

    printf("If you finish to input incomes, input '0'.\n");
    printf("Otherwise it input other number.\n");
    printf("Input > ");
     scanf("%d", &finish);

    if(finish == 0){ break; }

    i++;
  }
  
  write_file(argv[0], incomes, payments);

  printf("Finish.\n");
 
  return(0);
}
