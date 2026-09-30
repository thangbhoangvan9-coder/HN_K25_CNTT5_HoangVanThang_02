#include <stdio.h>
#define MAX_SIZE 50

int main (){
	int steps[MAX_SIZE] = {4500, 8200, 6000, 3200, 10000};
	int n = 5;
	int choice;
	int value;
	int pos;
	int newValue;
	int target;
	int count = 0;
	
	do {
		printf("=========================================\n");
		printf("CHUONG TRINH QUAN LY BUOC CHAN FITLIFE\n");
		printf("=========================================\n");
		printf("1. Them so buoc chan\n");
		printf("2. Sua so buoc chan\n");
		printf("3. Xoa so buoc chan\n");
		printf("4. Tim kiem so buoc chan\n");
		printf("0. Thoat chuong trinh\n");
		printf("=========================================\n");
		printf("Vui long nhap lua chon cua ban (0 - 4): \n");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1:
				printf("====Them so buoc chan====\n");
				printf("Mang hien tai: ");
				for (int i = 0; i < n; i++){
					printf("%d ", steps[i]);
				}
				printf("\n");
				if(MAX_SIZE == 0){
					printf("Mang da day, khong the them!");
				}
				printf("Nhap gia tri can them: ");
				scanf("%d", &value);
				if (value < 0){
					printf("So buoc chan khong hop le!");
				}
				printf("Nhap vi tri can chen:(1 - %d): ", n + 1);
				scanf("%d", &pos);
				if (pos < 1 || pos > n + 1) {
					printf("Vi tri chen khong hop le!");
				}
				for (int i = n; i >= pos; i--){
					steps[i] = steps[i - 1];
				}
				steps[pos - 1] = value;
				n++;
				printf("Them thanh cong!\n");
				printf("Mang hien tai la: ");
				for (int i = 0; i < n; i++){
					printf("%d ", steps[i]);
				}
				printf("\n");
				break;
				
			case 2:
				printf("===Sua so buoc chan===\n");
				printf("Mang hien tai la: ");
				for (int i = 0; i < n; i++){
					printf("%d ", steps[i]);
				}
				printf("\n");
				printf("Nhap vi tri can sua chua: ");
				scanf("%d", &pos);
				if (pos < 1 || pos > n) {
					printf("Vi tri sua khong hop le!");
					break;
				}
				printf("Nhap gia tri moi: ");
				scanf("%d", &newValue);
				if (newValue < 0) {
					printf("So buoc chan khong hop le!");
				}
				steps[pos - 1] = newValue;
				printf("Sua thanh cong\n");
				printf("Mang hien tai la: ");
				for (int i = 0; i < n; i++){
					printf("%d ", steps[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("=== Xoa so buoc chan ===\n");
				printf("mang hien tai: ");
				for (int i = 0; i < n; i++){
					printf("%d ", steps[i]);
				}
				printf("\n");
				if (n == 0){
					printf("Mang rong, khong the xoa!");
					break;
				}
				printf("Nhap vi tri can xoa: ");
				scanf("%d", &pos);
					if (pos < 1 || pos > n) {
					printf("Vi tri xoa kong hop le!");
					break;
				}
				for (int i = pos - 1; i < n - 1; i++) {
					steps[i] = steps[i + 1];
				}
				n--;
				printf("xoa thanh cong!\n");
				printf("mang hien tai: ");
				for (int i = 0; i < n; i++){
					printf("%d ", steps[i]);
				}
				printf("\n");
				break;
			case 4:
				printf("Tim kiem buoc chan\n");
				count = 0;
				printf("Nhap gia tri can tim: ");
				scanf("%d", &target);
				printf("Gia tri can tim: %d\n", target);
				printf("vi tri: ");
				for (int i = 0; i < n; i++) {
					if (steps[i] == target) {
						printf("%d", i + 1);
						count++;
					}
				}
				if (count == 0) {
					printf("khong tim thay gia tri trong mang");
				} else {
					printf(" so lan xuat hien: %d\n", count);
				}
				printf("\n");
				break;
				
			case 0:
				printf("Thoat chuong trinh\n");
				break;
			default:
				printf("Lua chon khong hop le!");
		}
	} while(choice != 0);
	
	return 0;
}