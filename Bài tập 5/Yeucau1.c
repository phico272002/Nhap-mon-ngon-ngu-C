#include <stdio.h>

// Hàm kiểm tra số hoàn chỉnh
int ktSoHoanChinh(int n)
{
    int sum = 0;

    //Chạy vòng lặp từ 1 đến số n đã cho
    for(int i = 1; i < n; i++){

        // Đối với mỗi số đi qua
        // Kiểm tra xem n có chia hết cho số đó hay không.
        if (n % i == 0)
            sum += i;
    }

    if(sum == n)
        return 0;

    return 1;
}

int main(){
    int n;

    printf("Nhap vao so nguyen duong n = ");
    scanf("%d", &n);

    int kiemTra = ktSoHoanChinh(n);
    if(kiemTra == 0)
        printf("%d la so hoan hao.\n", n);
    else
        printf("%d khong phai la so hoan hao.\n", n);
}
