#include <stdio.h>
#define MAX 100

int main() {
    int arr[MAX], n = 0, choice, pos;
    while (1) {
        printf("\nMENU\n1. Nhap vao mang\n2. Hien thi mang\n3. Them phan tu\n4. Sua phan tu\n5. Xoa phan tu\n6. Thoat\nChon: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Nhap n: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                printf("arr[%d]: ", i);
                scanf("%d", &arr[i]);
            }
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 3 && n < MAX) {
            printf("Them phan tu: ");
            scanf("%d", &arr[n++]);
        } else if (choice == 4) {
            printf("Vi tri: "); 
            scanf("%d", &pos);
            if (pos < n) {
                printf("Gia tri moi: ");
                scanf("%d", &arr[pos]);
            }
        } else if (choice == 5) {
            printf("Vi tri: ");
            scanf("%d", &pos);
            if (pos < n) {
                for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
                n--;
            }
        } else if (choice == 6) {
            break;
        } else {
            printf("Khong hop le!\n");
        }
    }
    return 0;
}
