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

    if(soluong  >= 5)
    {
        //Hien thi ra man hinh
        printf("%f so luong",thanhtien * 75 / 100);
    }

    else
        {
        //Hien thi ra man hinh
        printf("%f so luong",thanhtien);

        }

    return 0;
  }
