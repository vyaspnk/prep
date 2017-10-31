//
//  BubbleSort.c
//  
//
//  Created by Vyas on 10/17/17.
//
//

#include "BubbleSort.h"

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void BubbleSort(int *A, int len) {
    int i = 0;
    for(int i = 0; i< len; i++) {
        for(int j = i+1; j < len; j++) {
            if(*(A+i)>*(A+j)){
                swap(A+i, A+j);
            }
        }
    }
}

int main() {
    int i =0;
    int A[7]={12, 35, 87, 26, 9, 28, 7};
    for(i = 0; i < 7; i++)
        printf("%d ", A[i]);
    printf("\n");
    BubbleSort(&A[0], 7);
    for(i = 0; i < 7; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}
