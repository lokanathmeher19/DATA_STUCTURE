#include <stdio.h>
int main()
{
    int i, j, n, loc, temp;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter values in array: ");
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }


    for (i = 0; i < n - 1; i++) {
        loc = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[loc]) {
                loc = j;
            }
        }
        
        if (loc != i) {
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        }
    }

    printf("Sorted result:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
