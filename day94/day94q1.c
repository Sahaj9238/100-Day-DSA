#include <stdlib.h>

int cmp(const void* a, const void* b, void* rank) {
    int* r = (int*)rank;
    int x = *(int*)a, y = *(int*)b;
    if (r[x] != r[y]) return r[x] - r[y];
    return x - y;
}

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int rank[1001];
    for (int i = 0; i < 1001; i++) rank[i] = 1001;

    for (int i = 0; i < arr2Size; i++)
        rank[arr2[i]] = i;

    qsort_r(arr1, arr1Size, sizeof(int), cmp, rank);

    *returnSize = arr1Size;
    return arr1;
}
