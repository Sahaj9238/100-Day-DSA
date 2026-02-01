#include <stdio.h>

int main() {
    int n,t;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the target:");
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==t){
                printf("[%d,%d]",i,j);
            }
        }
    }
    return 0;
}
