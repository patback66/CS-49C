#include <stdio.h>

void Square(int arr [][8], int i, int j) {
    arr[i][j] = arr[i][j] * arr[i][j];
}

int main () {
    int arr2[7][8];
    arr2[5][3] = 10;
    Square(arr2, 5, 3);
    printf("result %d", arr2[5][3]);
    return 0;
}
