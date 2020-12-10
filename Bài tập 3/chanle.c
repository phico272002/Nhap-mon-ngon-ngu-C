#include <stdio.h>

int main (void)
{
	//Khai bao bien n
	int n;
	//Hien thi ra man hinh
	printf("Nhap so \n");
	//Nhap mot so ra tu ban phim
	scanf("%d",&n);
	//Kiem tra n la chan hay le
	if(n % 2==0 ) {
		printf("%d la so chan ",n);
		}
	else if (n % 2==0) {
		printf("n = 0");
		}
	else {
		printf("%d la so le",n);
		}

getchar();
return 0;
}
