#include <stdio.h>
void symbol(int num);
int main() {
  int sayi;
  printf("Sayi giriniz: ");
  scanf("%d",&sayi);
  symbol(sayi);
  return 0;
}
void symbol(int num)
{
  int i,j;
  int bosluk=num-1;
   for(i=0;i<num;i++)
    {
      for(j=0;j<bosluk;j++)
      {
        printf(" ");
      }

      for(j=0;j<=i;j++)
      {
        printf("* ");
      }
      printf("\n");
      bosluk--;
    }
}
