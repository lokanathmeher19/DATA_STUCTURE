#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter values in array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    for (i = 1; i < n; i++) {
        for (j = i; j > 0; j--) {
            if (a[j - 1] > a[j]) {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted result:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
