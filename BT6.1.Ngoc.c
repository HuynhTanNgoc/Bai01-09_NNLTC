//hi?n th? ra m�n h�nh ph?n t? c� gi� tr? l?n nh?t c?a m?ng.
#include <stdio.h>

void main(void)
{ 
    int ia[50], i, n; //khai b�o m?ng , bi?n d?m i, n
    
   	printf("Nhap n: ");
    scanf("%d", &n); //L?nh nh?p n
    
    printf("Gia tri cua mang ia[%d] lan luot la: ", n);
    for(i = 0; i < n; i++)  { // s? d?ng v�ng l?p for d? nh?p gi� tr? cho m?ng 
        scanf("%d", &ia[i]); // L?nh nh?p m?ng 
    }
    int max = ia[0];//khai b�o bi?n max g�n b?ng gi� tr? c?a m?ng ia[0]
  	for(i = 0; i < n; i++) { 
        if (max < ia[i]) max = ia[i]; // n?u max < ia[i] th� gi� tr? l?n nh?t l� ia[i]
    }
    printf("\nGia tri lon nhat cua mang la a[%d] = %d ", i, max); 
}
