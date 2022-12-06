//Tinh chu vi va dien tich hcn co chieu dai (m) , chieu rong (n).
#include<stdio.h>
int main(){
	int d, r;
	printf("Chieu dai canh d = ");
	scanf("%d", &d);
    printf("Chieu rong canh r = ");
    scanf("%d", &r);
    int S = d*r;
	int P = (d+r)*2;
	int T = d+r;
	//S la dien tich hcn, P la chu vi hcn
	
    printf("chu vi cua hinh chu nhat la:%d", P);
    printf("\ndien tich cua hinh chu nhat la:%d", S);
	printf("\nTong hai canh la %d", T);
}
