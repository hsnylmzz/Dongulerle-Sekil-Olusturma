#include <stdio.h>
void sekil(int edge1,int edge2);
int main() {
  int kenar1=0;
  int kenar2=0;
  printf("Birinci kenar giriniz: ");
  scanf("%d",&kenar1);
   printf("İkinci kenar giriniz: ");
  scanf("%d",&kenar2);
  sekil(kenar1,kenar2);
  return 0;
}
void sekil(int edge1,int edge2)
{
  int i,j;
  for(i=1;i<=edge1;i++)
  {
    if(i==1 || i==edge1)
    {
      for(j=1;j<=edge2;j++)
      {
        printf("*");
      }
      printf("\n");
      continue;
    }
    for(j=1;j<=edge2;j++)
    {
      if(j==1 || j==edge2)
       {
         printf("*");
       }
      else 
       {
         printf(" ");
       }
    }
     printf("\n");
  }
}
