#include<stdio.h>
int main(){
    int a;
    printf("a = ");
    scanf("%d", &a);
    if(a < 0)
	printf("\n a la so nguyen am");
    else if(a > 0)
    printf("\n a la so nguyen duong");
    else printf("\n nhap sai");
}

