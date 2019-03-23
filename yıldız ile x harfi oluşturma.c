#include <stdio.h>
void starsymbol(int num);
int main() {
  int sayi;
  printf("Bir Sayi Giriniz: ");
  scanf("%d",&sayi);
  starsymbol(sayi);
  return 0;
}
void starsymbol(int num)
{
  int i,j;
  for(i=0;i<num;i++)
  {
    for(j=0;j<num;j++)
    {
      if(i==j || j==(num-i-1))
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
