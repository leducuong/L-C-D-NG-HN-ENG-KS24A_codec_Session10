#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 5, 2, 7};
    int length = sizeof(arr) / sizeof(arr[0]);
    int x;
    int positions[100];
    int posCount = 0;

    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &x);

    for (int i = 0; i < length; i++) {
        if (arr[i] == x) {
            positions[posCount] = i;
            posCount++;
        }
    }

    if (posCount > 0) {
        printf("Phan tu %d xuat hien tai cac vi tri: ", x);
        for (int i = 0; i < posCount; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}
