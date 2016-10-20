#include<stdio.h>
#include<stdlib.h>

void write_file(char text[],int total_in,int total_out);

void write_file(char text[],int total_in,int total_out)
{
  FILE *fp;
  int day, month, year;

  if( (fp = fopen(text,"w+")) == NULL){
    printf(" could not open file\n");

   }
  else{
    printf("accesse file...\n");
  }
 
  printf("what's day today?\n");
  printf("/dd/mm/yy/\n");
 
  printf("/"); scanf("%d", &day);
  printf("/"); scanf("%d", &month);
  printf("/"); scanf("%d", &year);
  printf("/\n");

  fprintf(fp, "%2d/%2d, %4d\n", day, month, year);
  fputs("------------------------------------------------\n", fp);

  fprintf(fp, "total income : %d\n\n",total_in);
  fprintf(fp, "total out money : %d\n",total_out);
  fprintf(fp, "total yours money : %d\n",(total_in - total_out));

  fputs("------------------------------------------------\n", fp);
  fclose(fp);

}
