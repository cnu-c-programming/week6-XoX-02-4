#include <stdio.h>

void print_2d_arr(int* element, int row_size, int col_size) {
    for (int i=0; i<row_size; i++) {
        for (int j=0; j<col_size; j++) {
            printf("%d ", *(element + i * col_size + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    // 첫 번째 요소의 주소를 1차원 포인터 타입으로 넘김
    print_2d_arr(&arr[0][0], 2, 3);
}