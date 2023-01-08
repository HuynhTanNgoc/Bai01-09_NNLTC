/*Hoàn ch?nh hàm tong(n) d? chuong trình xu?t ra giá tr? 1 + 2 +...+ n.
Ví d? nh?p vào ô Stdin Inputs là 3 và nh?n Execute s? hi?n th? 1 + 2 +...+ n = 6.*/
#include<stdio.h>

int tong(int n);
int main() {
    int n;
    scanf("%d", &n);
	printf("1 + 2 + 3 +...+ n = %d", tong(n));
	//In ra giá tr? c?a hàm tong(n), mà hàm du?c tr? v? total, total du?c x? lý b?i vòng l?p.=> tong(n) == total.
}
int tong(int n){
    //khai báo bi?n:
    int i, total = 0;
	//x? lý:
	for (i= 1; i<=n; i++){
		total = total + i;
	}
	return(total); //hàm du?c tr? v? total.
}
