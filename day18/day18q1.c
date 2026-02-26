#include <stdio.h>
void reverse(int a[], int start, int end) {
    while (start < end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d", &a[i]);
    }
    int k;
    printf("Enter the number of postions to shift:");
    scanf("%d", &k);
    k=k%n;
    reverse(a, 0, n - 1);
    reverse(a, 0, k - 1);
    reverse(a, k, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
