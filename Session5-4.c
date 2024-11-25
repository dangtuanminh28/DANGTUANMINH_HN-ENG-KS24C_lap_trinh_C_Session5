#include<stdio.h>
int main(){
// khai bao bien
    int n;
// nhap 1 so nguyen duong tu 1 den 10
    printf(" vui long nhap 1 so nguyen duong tu 1 den 10: ");
    scanf("%d",&n);
// kiem tra so nguyen duong
    if (n < 1 || n > 10) {
    printf("So nhap khong hop le! Vui long nhap lai ");
    } 
	while (n < 1 || n > 10);
// in ra bang cuu chuong
    printf("Bang cuu chuong cua %d: ", n);
    for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
    }
	return 0;
}
