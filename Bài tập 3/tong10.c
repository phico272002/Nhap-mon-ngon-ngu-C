#include <stdio.h>
main()

{
	//Khai bao bien tong, dem , n
int tong, dem, n;
	
	tong = 0;
	
	//Hien thi ra man hinh
	printf("Nhap n = ");
	//Nhap tu gia tri tu ban phim
	scanf("%d", &n);
	//Vong lap for tinh tong
for (dem = 1; dem <= n; dem++) 
{
	//Tinh tong
	tong = tong + dem;
}
	//Hien thi ra man hinh
	printf("Tong la: %d", tong);
return 0;
}
