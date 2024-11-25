#include<stdio.h>
int main(){
// khai bao bien
    int n = 4;
    int i;
// nhap gia tri 
   do {
    printf(" nhap 1 so bat ki: \n");
    scanf("%d", &i);
    if (i != n ){
   	printf(" sai roi! hay nhap lai: \n");
    }
}	while ( i != n);
    printf("dung roi! vay so duoc cho la: %d .", n);  	
	return 0;
}
