//Xu?t rà màn hình s? nguyên duong n nh? nh?t sao cho 1 + 2 +...+ n > 10000.
#include"stdio.h"
int main(){
    //Khai bao bien:
	int n, tong;
	n = 0;
	tong = 0;
	//Xu ly va in ra ket qua:
	while(tong<10000){
		n++;
		tong = tong + n;
	}
	    printf("Gia tri tong:%d", tong);
	
	if(tong>10000)
	    printf("\nGia tri n nho nhat la n = %d", n);
}    
