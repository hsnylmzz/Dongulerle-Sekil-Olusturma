#include <stdio.h>
void eskenardortgen(int num);
int main() {
  int sayi;
  printf("Bir sayi giriniz: ");
  scanf("%d",&sayi);
  eskenardortgen(sayi);
  return 0;
}
void eskenardortgen(int num)
{
  int i,j;
  int space=num-1;
  int star1=0;
  int star2=0;
  int space2=num-2;
  for(i=1;i<=num;i++)
  {
    for(space=0;space<num-i;space++)
    {
      printf(" ");
    }
    for(star1=0;star1<i;star1++)
    {
      printf("* ");
    }
    printf("\n");
    space--;
  }

  for(i=num-1;i>=1;i--)
  {
     for(space2=0;space2<num-i;space2++)
     {
       printf(" ");
     }
     for(star2=0;star2<i;star2++)
     {
       printf("* ");
     }
     printf("\n");
     space2++;
  }
}

// Bir sayi giriniz: 4
//      *
//     * *
//    * * *
//   * * * *
//    * * *
//     * *
//      *
