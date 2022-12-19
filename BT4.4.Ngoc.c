//bai4.4:Viet chuong trinh hien thi tat ca cac so le nho hon 100 tru 5, 7, 93.
#include"stdio.h"
int main(){
	int sole;
	for(sole=1;sole<=100;sole++){//Cho sole chay tu 1 den 100.
		if(sole==5 || sole==7 || sole==93){//Neu sole = 5,7,93.
			sole%2==0;//So chia het cho 2 la so chan
			continue;//Bo qua cac cau lenh phia sau no va quay lai vong lap neu dieu kien ben trong vong lap la dung.
		}
		else if (sole%2!=0) // so khong chia het cho 2 la so le.
			printf("%d\n", sole);
	}
}
		
/*		
	sole = 1;
	//LOOP: 
	do {
		if(sole==5 || sole==7 || sole==93){
			sole++;
			sole%2==0;
			continue;
			//	goto LOOP;
		}
		
		else if (sole%2!=0)		
			printf("%d\n", sole);
		sole++;
	}while(sole<=100);
}
*/

