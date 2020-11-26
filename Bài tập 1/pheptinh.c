#include <stdio.h>

int main(void)
{
	// khai boa bien num va khoi tao bien a va b
	int a = 3;
	int b = 5;
	printf("Tinh Tong A+B = %d\n",a+b);
	printf("Tinh Hieu A-B = %d\n",a-b);
	printf("Tinh Tich A*B = %d\n",a*b);
	printf("Tinh Thuong A/B = %d\n",a/b);
	printf("Tinh Thuong: %d / %d = %f",a,b,(float)a/b);
	getchar();
	return 0;
	
}
