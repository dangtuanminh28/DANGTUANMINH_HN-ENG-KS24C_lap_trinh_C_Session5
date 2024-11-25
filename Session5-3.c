#include<stdio.h>
int main(){
// khai bao bien
    int n;
    int sum = 0;
// gan 1 gia tri so nguyen duong
    printf("nhap 1 so nguyen duong: ");
    scanf("%d", &n);
// tinh tong cac so tu 1 den n
    for (int i = 1; i <= n; i++) {
    sum += i;
    }
// In ket qua
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
	
	}
