#include <stdio.h>
#include "sum.h"

#define N 5

int main(void)
{
  int i;
  int payments[N];
  
  for(i = 0; i < N; i++){
     printf(" payments[%d] = ? > ", i);
      scanf("%d", &payments[i]);
  }

  return(0);
}
