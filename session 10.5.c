#include <stdio.h>

int main() {
    int array[] = {34, 7, 23, 32, 5, 62, 2, 78};
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan \n: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int target;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);
    int left = 0, right = size - 1, found = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (array[mid] == target) {
            printf("Phan tu dc tim thay trong phan tu %d.\n", target, mid);
            found = 1;
            break;
        } else if (array[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Phan tu ko ton tai trong mang.\n", target);
    }

    return 0;
}
