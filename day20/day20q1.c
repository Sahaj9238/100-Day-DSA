#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++) {
        printf("Enter the element:");
        scanf("%d",&a[i]);
    }
    int count = 0;
    for (int i=0;i<n;;i++) {
        int sum=0;
        for (int j=i;j<n;j++) {
            sum+=a[j];
            if (sum==0) {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
