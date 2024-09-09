#include <stdio.h>

int cube(int num) {
    return num * num;
}

void findCubes(int *arr, int rows, int cols) {
    int *ptr = arr;
    printf("Cubes of all elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", cube(*(ptr + i * cols + j))); 
        }
        printf("\n");
    }
}


 main() {
    int size;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes(&arr[0][0], size, size);

}
