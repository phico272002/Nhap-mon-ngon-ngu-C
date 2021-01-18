#include <stdio.h>

int main () 
{
  //Khai bao bien kem khoi tao mang (Chiec hop 100 ngan)
  int a[100];
  //Khao bao bien n va i
  int n, i;
  //Khai bao bien s de tinh tong
  int s = 0;
      //In dong chu nhap kich thuoc mang ra man hinh
  		printf("Nhap kich thuoc mang: \n");
      //Nhap so lieu tu ban phim
  		scanf("%d", &n);
      //In dong chu Nhap so phan tu ra man hinh
      printf("Nhap so phan tu: \n");
      //Vong lap i 
 	for	(i = 0; i < n; i++)
		{
      //Nhap so lieu phan tu ra man hinh
      scanf("%d", &a [i]);
		}
  //Vong lap Tinh tong cac so tu day tren
	for ( i = 0; i < n; i++)
	{
		s = s + a[i];
	}
    //In ket qua tinh tong ra man hinh 
		printf("\nTong cac so tu day tren = %d", s);
  
  return  0;
}
