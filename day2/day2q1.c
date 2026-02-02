#include <stdio.h>
int main(){
    int n; // defining variables to store the range of the array

    printf("Enter the range of the array:");
    scanf("%d", &n); // inputting the range and storing it in n

    int a[n];

    for (int i = 0; i < n; i++){ // for loop to iterate n times and to input and store the element in the aay
        printf("Enter a element:");
        scanf("%d", &a[i]);
    }

    int index;          //defining varibale to store the index to be deleted
    printf("Enter the index position to be deleted:");
    scanf("%d",&index);         //inputting the index position and storing it in index

    if (index>=n+1){            //if the entered index is greater than the length of array
        printf (" \n Deletion is not possible in the aay.");  
    }  
    else{               //if the entered index is withing the lenght of the array
        for (int i=index;i<n-1;i++){            //deleting the variable at that index position by shifting every element to the left
            a[i] = a[i + 1];  
        }
        printf("The array after deleting the element is:\n ");
        for (int i=0;i<n-1;i++){            //printing the array after deleting the element
            printf("%d ", a[i]);
        }
    }
    return 0;
}
