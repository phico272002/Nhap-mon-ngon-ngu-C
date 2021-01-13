#include <stdio.h>


int main()
{
  int h = 4;
  //h = 4 : 4 hang
  //Hang 1: 1 (2*1 - 1) ngoi sao , 3 (4 - 1) khoang trong
  //Hang 2: 3 (2*2 -1) ngoi sao , 2 (4 -2) khoang trong
  //Hang 3: 5 (2*3 - 1) ngoi sao , 1 (4 -3) khoang trong
  //Hang 4: 7 (2*4 -1) ngoi sao , 0 ( 4 - 4khoang trong

  //h = 3 : 3 hang
  //Hang 1: 1 ngoi sao , 2 (3-1) khoang trong
  //Hang 2: 3 ngoi sao , 1 (3-2) khoang trong
  //Hang 3: 5 ngoi sao , 0 (3-3) khoang trong

  //h = 2 : 2 hang
  //Hang 1: 1 ngoi sao , 1 (2-1) khoang trong
  //Hang 2: 3 ngoi sao , 0 (2-2) khoang trong

  //h = 1 : 1 hang
  //Hang 1: 1 ngoi sao, 3 khoang trong
//in ra 10 dong xin chao


  for(int i = 1; i <= h; i++)
  {
    //in ra h - i khoang trang
    for(int j = 1; j <= h - i; j++)
    printf("   ");
    //in ra 2*i -1 ngoi sao
    for(int k = 1; k <= 2*i - 1; k++)
    printf(" * ");
    printf("\n");
  }

return 0;
}

