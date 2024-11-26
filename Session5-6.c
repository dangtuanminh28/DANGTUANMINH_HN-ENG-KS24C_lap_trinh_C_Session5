#include<stdio.h>
int main(){
// khai bao bien
    int i;
	float na, nb;
// nhap 2 so bat ky	
	printf("nhap so thu nhat: ");
	scanf("%f",&na);
    printf("nhap so thu hai: ");
	scanf("%f",&nb);
// in ra man hinh
    printf("\n--- CALCULATOR ---\n");
    printf("1. Tong cua 2 so\n");
    printf("2. Hieu cua 2 so\n");
    printf("3. Tich cua 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. Thoat\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &i);
// xu ly thong tin tu nguoi nhap vao
switch(i) {
    case 1:
        printf("Tong cua %.2f va %.2f la: %.2f\n", na, nb, na + nb);
        break;
    case 2:
        printf("Hieu cua %.2f va %.2f la: %.2f\n", na, nb, na - nb);
        break;
    case 3:
        printf("Tich cua %.2f va %.2f la: %.2f\n", na, nb, na * nb);
        break;
    case 4:
        if (nb != 0) {
        printf("Thuong cua %.2f và %.2f la: %.2f\n", na, nb, na / nb);
        } else {
            printf("Khong chia duoc cho 0.\n");
    }
        break;
    case 5:
        printf("Thoat chuong trinh\n");
        break;
        default:
        printf("Lua chon khong hop le. Vui long nhap lai so\n");
    }
// Thoat khoi vong lap  
	while (i != 5); 
	return 0;
}
