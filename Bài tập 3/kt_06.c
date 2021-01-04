#include <stdio.h>

int main()
{
        //Khai bao bien kieu int
  int i, j;
  int h = 4;
      //Hien thi ra man hinh tam giac can dac
      printf("\t                  Tam giac can dac \n");
  if(h > 0)
    { // cau a
  for(i = 1; i <= h; i = i + 1)
    {
  for(j = 1; j < h * 2; j = j + 1)
    {
  if(abs(h - j)<= (i - 1))
          {
          printf("\t * ");
          }
         else
          {
          printf("\t ");
          }
    }
          printf("\n");
    }
    }
  int k, a, b ;
  k = h -1 ;
      {
        printf ("\t                  Tam giac can rong \n");
      }
  for(a = 0; a < h - 1; a = a + 1)
    {// cau b
      for(b = 0; b < 2 * h - 1; b = b + 1)
      {
        if(b == k - a || b == k + a)
          {
           printf("\t * ");
          }
         else
          {
          printf("\t ");
          }
      }
          printf("\t \n");
    }
    for(a = 0; a < 2 * h - 1; a = a + 1)
          printf("\t * ");
return 0;
}
