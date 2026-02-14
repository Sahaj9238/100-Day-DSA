#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows as it is a square matrix:");
    scanf("%d", &n);
    int a[n][n];
    int flag=1;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("Enter the element:");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0;i<n && flag;i++) {
        for (int j=0;j<n;j++) {
            if (i==j) {
                if (a[i][j]!=1){
                    flag=0;
                    break;
                }
            }else{
                if(a[i][j]!=0) {
                    flag=0;
                    break;
                }
            }
        }
    }
    if (flag)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");
    return 0;
}
