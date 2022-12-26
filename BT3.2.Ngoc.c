//Nhập vào một số nguyên bất kỳ và hiển thị thông báo số đó là chẵn hay lẻ.
#include<stdio.h>
int main(){
    //Nhap vao so nguyen bat ky:
    int so_nguyen;
    printf("Nhap vao so_nguyen = ");
    scanf("%d", &so_nguyen);
    //Xu ly va in ra ket qua: 
    if(so_nguyen %2 == 0) //Neu so_nguyen chia het cho 2 thi do la so chan.
        printf("%d la so chan", so_nguyen);
    else //Neu khong chia het cho 2 thi do la so le.
        printf("%d la so le", so_nguyen);
}
