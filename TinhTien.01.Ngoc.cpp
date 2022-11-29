/* Viet chuong trinh hien thi tong tien 10 cuon so tay,
biet don gia moi cuon so la 500 va nhan ngay 20-11 nha sach
giam 20% tong tien moi don hang
*/
#include<stdio.h>
int main(){
//Khai bao bien:
	// T1 la gia tien 1 cuon so tay.
	// T10 la gia tien 10 cuon so tay.
	// T la tong tien 10 cuon so tay sau khi giam 20%.
	int T1 = 500, T10, T, hoivien;
	
	printf("Nhap vao hoi vien hai so 0 or 1 :");
	scanf("%d", &hoivien);	
	//Tinh tong va hien thi
	T10 = T1*10;
	T = T10-(T10*0.2);   // (T10*0.2) la so tien duoc giam
	
	if (hoivien==1)
		
		printf("\nTong tien moi don hang la: %d", T);
		
	else if(hoivien==0)
		
		printf("\nTong tien moi don hang la: %d", T10);
		
	else
		printf("\nNhap vao hoi vien sai");
		
}
