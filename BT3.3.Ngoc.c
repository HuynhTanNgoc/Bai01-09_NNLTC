//BT3.3: Nhap vao diem cua mot hoc sinh tu 0 den 10 va hien thi trong bao theo quy tac:
#include<stdio.h>
int main(){
	float diem;
	printf("Nhap diem la cac so tu 1 den 10.\n Diem = ");
	scanf("%f", &diem);
	
	if(9<=diem && diem<=10)
	   printf("Xuat sac");
		
		else if(8<=diem && diem<9)
			printf("Gioi");
		
		else if(7<=diem && diem<8)
			printf("Kha");
		
		else if(6<=diem && diem<7)
			printf("TB Kha");
		
		else if(5<=diem && diem<6)
			printf("TB");
		
		else if(0<=diem && diem<5)
			printf("Yeu");
	    
	    
	else
	    printf("Nhap diem sai");	
	
}
