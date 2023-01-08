/*Ho�n ch?nh h�m tong(n) d? chuong tr�nh xu?t ra gi� tr? 1 + 2 +...+ n.
V� d? nh?p v�o � Stdin Inputs l� 3 v� nh?n Execute s? hi?n th? 1 + 2 +...+ n = 6.*/
#include<stdio.h>

int tong(int n);
int main() {
    int n;
    scanf("%d", &n);
	printf("1 + 2 + 3 +...+ n = %d", tong(n));
	//In ra gi� tr? c?a h�m tong(n), m� h�m du?c tr? v? total, total du?c x? l� b?i v�ng l?p.=> tong(n) == total.
}
int tong(int n){
    //khai b�o bi?n:
    int i, total = 0;
	//x? l�:
	for (i= 1; i<=n; i++){
		total = total + i;
	}
	return(total); //h�m du?c tr? v? total.
}
