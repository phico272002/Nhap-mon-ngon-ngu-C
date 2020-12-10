#include <stdio.h>

int main (void)
{
	//Khai bao bien a
	int a;
	//Hien thi ra man hinh
	printf("Nhap so \n");
	//Nhap mot so ra tu ban phim
	scanf("%d",&a);
	//Khiem tra a la duong hay am
	if(a > 0) {
		printf("%d la so duong ",a);
		} else if (a == 0) {
		printf("a = 0");
		}
		else {
		printf("%d la so am",a);
		}

getchar();
return 0;
}
