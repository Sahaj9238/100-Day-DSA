#include <stdio.h>
int main(){
    int n,b; 
    
    printf("Enter the range of the array:");
    scanf("%d",&n);         
    
    int a[n];         

    for (int i=0;i<n;i++){          
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }

    printf("Enter an element to search:");
    scanf("%d",&b);         

    int j=0;
    for(j=0;j<n;j++){           
        if (a[j]==b){
            printf("The index position of the element is: %d",j);
            break;        
    }

    if (j==n){     
        printf("The element is not there in the array");
    }
}
