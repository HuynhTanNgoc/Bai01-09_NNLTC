//Tnh chu vi va dien tich hcn co chieu dai (m) , chieu rong (n).
#include<stdio.h>
int main(){
	int m, n;
	printf("Chieu dai canh m = ");
	scanf("%d", &m);
    printf("Chieu rong canh n = ");
    scanf("%d", &n);
    int S = m*n;
	int P = (m+n)*2;
	int T = m+n;
	//S la dien tich hcn, P la chu vi hcn
	
    printf("chu vi cua hinh chu nhat la:%d", P);
    printf("\ndien tich cua hinh chu nhat la:%d", S);
	printf("\nTong hai canh la %d", T);
}
