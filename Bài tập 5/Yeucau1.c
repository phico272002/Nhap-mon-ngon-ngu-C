#include <stdio.h>

//Kiem tra so hoan hao
int kiemtrasohoanhao(int n)
{
    int sum = 0;
  
    //Vong lap tu 1 den so n da cho
    for(int i = 1; i < n; i++)
    {
        // Kiem tra n co chia het cho so do khong
        if (n % i == 0)
            sum += i;
    }

    if(sum == n)
        //0 la true
        return 0;
    //1 la false
    return 1;
}

int main()
{   
    //Khai bao bien n
    int n;
    //
        printf("Nhap so n = ");
        scanf("%d", &n);

    int kiemtra = kiemtrasohoanhao(n);
    if(kiemtra == 0)
        printf("%d la so hoan hao.\n", n);
    else
        printf("%d khong phai la so hoan hao.\n", n);
}
