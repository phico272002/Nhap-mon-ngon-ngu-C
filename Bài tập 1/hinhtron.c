#include <stdio.h>

int main(void)
{ 
	//Khai bao bien DT, CV kieu double
	double DT, CV;
	//Khai bao bien R kieu double
	double R = 1.5 ;
	//Khai bao hang kieu PI kieu duoble
	const double PI = 3.14;
	//Tinh Chu Vi
	CV = 2*R*PI;
	//Tinh Dien tich
	DT = R*R*PI;
	//Hien thi ra man hinh chu vi
  printf("CV: %0.1f\n",CV);
  // Hien thi ra man hinh dien tich
  printf("DT: %0.1f\n",DT);
  getchar();
  return 0;
}
