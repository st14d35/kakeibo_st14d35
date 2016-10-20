#include<stdio.h>
#include "average.h"

int main(void){
int payments[5] = {10,20,30,40,50};

 if(average(payments) == 30){
   printf("テスト成功\n");
 }else{
    printf("テスト失敗\n");
  }
return 0;
}
