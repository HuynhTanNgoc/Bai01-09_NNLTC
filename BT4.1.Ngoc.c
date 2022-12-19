//Nh?p m?t s? nguyên duong n t? bàn phím. Chuong trình hi?n th? giá tr? t?ng S = 1 + 1/2 + 1/3 +...+ 1/n.
#include"stdio.h"
int main(){
	//Khai bao bien:
	int n;
	float S, i;
	S = 0;
	printf("Nhap n > 0, n = ");
	scanf("%d", &n);
	//Dieu kien cua n;
	if(n<1) //Neu nhap n < 0 thi yeu cau nhap lai n .
	printf("Vui long nhap lai n (n > 0): ");
	
	//Xu ly va in ket qua:
	for(i = 1; i <= n; i++)
	S = S + 1/i;
		
printf("\nGia tri tong S = %.1f", S);
}

