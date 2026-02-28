#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    for (int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    int left=0;
    int right=n-1;
    int min_sum=1000000;
    int a=0,b=0;

    while(left<right){
        int sum=a[left]+a[right];
        int asum;
        if(sum<0)
            asum=-sum;
        else
            asum=sum;
        if(asum<min_sum){
            min_sum=asum;
            a=a[left];
            b=a[right];
        }
        if(sum<0)
            left++;
        else
            right--;
    }
    if(a<b)
        printf("%d %d", a, b);
    else
        printf("%d %d", b, a);

    return 0;
}
