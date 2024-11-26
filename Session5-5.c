#include <stdio.h>
int main() {
// in ra cac so tu 1 den 9
    for (int i = 1; i <= 9; i++) {
        printf("Bang cuu chuong %d:\n", i);
// in ra bang cuu chuong
    for (int j = 1; j <= 9; j++) {
        printf("%d x %d = %d\n", i, j, i * j);
    }
// in ra khoang trong        
	printf("\n"); 
    }
    return 0;
}
