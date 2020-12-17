#include <stdio.h>


int main()
{

          //Khai bao bien kieu
    float dongia, soluong, thanhtien;
        //Hien thi ra man hinh so luong
        printf("Nhap vao so luong:\n");
        //Nhap mot so ra tu ban phim
        scanf("%f",&soluong);
        //Hien thi ra man hinh don gia
        printf("Nhap vao don gia:\n");
        //Nhap mot so tu ban phim
        scanf("%f",&dongia);
        //Tinh thanh tien
        thanhtien = soluong * dongia;
        

    if(soluong  >= 5 && dongia >= 500)
    {
        //Hien thi ra man hinh
        printf(" Thanh tien: %0.1f",thanhtien * 50 / 100);
    }
    else
    {
        //Hien thi ra man hinh
        printf("Thanh tien : %0.1f",thanhtien);

    }

    return 0;
  }
