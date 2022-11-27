#include<stdio.h>
// Tinh chu vi, dien tich hinh tron co ban kinh (R) 
// Chu vi (CV) = 2*R*PI
// Dien tich (DT)=pow(R, 2)*PI
#define PI 3.141593 // Hang so PI (hang so khong thay doi).
#include<math.h>
int main() {
    float R, CV, DT;
    printf("Nhap vao ban kinh R= ");
    scanf("%f", &R);
//Tinh chu vi, dien tich hinh tron co ban kinh R va hien thi.    
    CV = 2*R*PI;
    DT = pow(R, 2)*PI;
    printf("Chu vi hinh tron co ban kinh R = %.0f la: %.0f", R, CV);
    printf("\nDien tich hinh tron co ban kinh R  = %.0f la %.0f", R, DT);
    
    
}
