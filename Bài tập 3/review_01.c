#include <stdio.h>
int main()

{
	//Khai bao bien
int n;
	//Hien thi ra ban hinh
	printf("Nhap vao so \n");
	//Nhap so tu ban phim
	scanf("%d", &n);
	//Nhap 1 de ra one
if (n <= 1 )
{
	//Hien thi ra man hinh
	printf("One",n);
}	
else if (n <= 2)
{	
	printf("Two",n);
}
else if (n <= 3)
{
	printf("Three",n);
}
else if (n <= 4)
{
	printf("Four",n);
}
else if (n <= 5)
{
	printf("Five",n);
}
else if (n <= 6)
{
	printf("Six",n);
}
else if (n <= 7)
{
	printf("Seven",n);
}
else if (n <= 8)
{
	printf("Eight",n);
}
else if (n <= 9)
{
	printf("Nine",n);
}
else if (n > 9)
{
	printf("Greater than 9",n);
}
return 0;
}
