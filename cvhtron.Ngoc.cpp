#include<stdio.h>

//Tinh chu vi dien tich hinh tron ban kinh (bankinh).
// Chu vi (Chuvi) = 2*bankinh*PI
//
//
#define PI 3.141593 //Hang so PI

int main() {
    int bankinh = 5;// ban kinh hinh tron
    float chuvi; // Chu vi hinh tron
    // Tinh chu vi hinh tron
    chuvi = 2*PI*bankinh;
    printf("Chu vi hinh tron co ban kinh %d la: %.2f", bankinh, chuvi);
}
