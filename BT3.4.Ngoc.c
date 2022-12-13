//BT3.4:Nhap vao hai so a,b va mot so bat ky.chuong trinh se hien thi theo quy tac:
#include<stdio.h>
int main(){
	float a, b, tong, hieu; 
	char kytu;
	printf("Nhap vao hai so a va b la: ");
	scanf("%f%f", &a, &b);
	printf("Nhap vao ky tu + hoac -: ");
	scanf("\n%c", &kytu);
	
	switch(kytu)
	{	
		case 43: 
			tong= a + b;
			printf("Tong cua a va b la: %.1f", tong);
			break;	
			
		case 45: 
			hieu= a + b;
			printf("hieu cua a va b la: %.1f", hieu);
			break;	

		default:
			printf("\nVui long nhap vao + hoac -");
	}
	
}
