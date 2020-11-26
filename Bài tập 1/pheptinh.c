#include <stdio.h>

int main(void)
{
	// Khai bao bien a, b kieu int
	int a,b;
	// khoi tao bien a = 3
	a = 3;
	// khoi tao bien b = 5
	b = 5;
	// Khai bao cac bien tong, hieu, tich
	int tong, hieu, tich;
	// Khai bao bien thuong
	double thuong;
	// gan tong a + b
	tong = a + b;
	// gan hieu a - b
	hieu = a - b;
	// gan tich a * b
	tich = a * b;
	// gan thuong a / b va ep kieu
	thuong = (double)a / b;
	printf("a + b = %d, a - b = %d, a * b = %d, a / b = %0.1f", tong, hieu, tich, thuong);
	getchar();
	return 0;
	
}
