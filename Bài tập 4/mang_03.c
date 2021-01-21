#include <stdio.h>

int main () 
{
  //Khai bao bien kem khoi tao mang (Chiec hop 100 ngan)
  //int a[100];
  //Khao bao bien n va i
  int n, i;
  //Khai bao bien s de tinh tong
  int chan = 0;
  int le = 0;
  int so = 0;
      //In dong chu nhap kich thuoc mang ra man hinh
  		printf("Nhap kich thuoc mang: \n");
      //Nhap so lieu tu ban phim
  		scanf("%d", &n);
  		int a[n];
      //In dong chu Nhap so phan tu ra man hinh
      printf("Nhap so phan tu: \n");
      //Vong lap i 
 	for	(i = 0; i < n; i++)
		{
      //Nhap so lieu phan tu ra man hinh
      printf("Nhap phan tu %d: ", i);
      scanf("%d", &a [i]); 
		}
  //Vong lap hien thi mang a
  printf("Mang a:");
   	for	(i = 0; i < n; i++)
		{
      //Nhap so lieu phan tu ra man hinh
      		printf(" %d", a[i]);
		}
	printf("\n");
  //Vong lap so chan tinh tong so chan
  	printf("Dem cac so chan: ");
	for ( i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 && a[i] != 0)
		{
			chan = chan + a [i];
			printf("%d ", a[i]);	
		}
	}
	printf("\n");
	 //Vong lap so le tinh tong so le
  	printf("Dem cac so le: ");
	for ( i = 0; i < n;  i++)
	{		
		if(a[i] % 2 != 0 )
		{	
			le = le + a [i];
			printf("%d ", a[i]);	
		}	
	}
	//Vong lap dem so 0
	for ( i = 0; i < n; i++)
	{		
		if(a[i] == 0)
		{
			so++;
		}
		
	}
		printf("\nDem so 0: %d lan", so);
		printf("\nTong so le = %d", le);
		printf("\nTong so chan = %d", chan);
		
  return  0;
}
