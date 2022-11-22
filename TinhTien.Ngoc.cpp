/* Viet chuong trinh hien thi tong tien 10 cuon so tay,
biet don gia moi cuon so la 500 va nhan ngay 20-11 nha sach
giam 20% tong tien moi don hang
*/
#include<stdio.h>
int main(){
	// T1 la gia tien 1 cuon so tay.
	// T10 la gia tien 10 cuon so tay.
	// T la tong tien 10 cuon so tay sau khi giam 20%.
	int T1 = 500, T10, T;
	
	//Tinh tong va hien thi
	T10 = T1*10;
	T = T10 - ((T10*20)/100);
	
	printf("Tong tien 10 cuon so tay truoc khi giam la: %d", T10);
	printf("\nTong tien 10 cuon so tay sau khi giam la: %d", T);
		
}
