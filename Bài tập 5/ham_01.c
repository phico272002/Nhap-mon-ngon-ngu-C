#include <stdio.h>
int tong (int a, int b, int c); //Khai bao ham tong
//Khoi ham main
int main(void)
{
int x, y, z;
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
    //Kieu du lieu tra ve ham int
  }
//-------------------------------------------------------------------------------
#include <stdio.h>
void tong();

int main(void)
{
  tong();
  return 0;
}
void tong()
{
  int x, y, z;
  printf("Nhap so: ");
  scanf("%d", &x);
 printf("Nhap so: ");
  scanf("%d", &y);
  printf("Nhap so: ");
  scanf("%d", &z);
  printf("Tong cua 3 so = %d", x + y + z);
}
//Kieu du lieu khong tra ve
