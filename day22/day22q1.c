#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*first=NULL, *ptr=NULL;
int count=0;
int main() {
    int n;
    printf("Enter the size of the list:");
    scanf("%d", &n);

    for (int i=0;i<n;i++) {
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be added:");
        scanf("%d", &new->data);
        new->next = NULL;

        if (first==NULL) {
            first=new;
            ptr=first;
        } else {
            ptr->next=new;
            ptr=new;
        }
    }
    for(ptr=first;ptr!=NULL;ptr=ptr->next) {
        count++;
    }
    printf("%d", count);
    return 0;
}
