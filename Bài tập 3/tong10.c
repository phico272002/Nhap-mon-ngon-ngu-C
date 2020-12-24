#include <stdio.h>
main()

{
	//Khai bao bien
int tong;
	
	tong = 0;
int dem;
	//Vong lap for tinh tong
for (dem = 1; dem <= 10; dem++) 
{
	//Tinh tong
	tong = tong + dem;
}
	//Hien thi ra man hinh
	printf("Tong la: %d", tong);
return 0;
}
