#include <stdio.h>
void eskenarucgen(int num);
int main() {
  int sayi;
  printf("Bir sayi giriniz: ");
  scanf("%d",&sayi);
  eskenarucgen(sayi);
  return 0;
}
void eskenarucgen(int num)
{
  int i,j;
  int space=0;
  int star=0;
  for(i=1;i<=num;i++)
    {
      for(space=1;space<=num-i;space++)
       {
          printf(" ");
       }
      for(star=0;star!=2*i-1;star++)
       {
          printf("*");
       }
      printf("\n");
    }

//Kodun Çıktısı 
//Bir sayi giriniz: 4
//         *
//       * * *
//     * * * * *
//   * * * * * * *
