#include <stdio.h>
int tong (int a, int b, int c); //Khai bao ham tong
//Khoi ham main
int main(void)
{
int x, y, z;
int n = 0;
  printf("Nhap so: ");
  scanf("%d", &x);
 printf("Nhap so: ");
  scanf("%d", &y);
  printf("Nhap so: ");
  scanf("%d", &z);
  printf("Tong cua 3 so = %d", tong (x, y, z));
  return 0;
}
  int tong(a, b, c)
  {
return a + b + c;
  }
