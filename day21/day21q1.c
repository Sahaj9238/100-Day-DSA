#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*first=NULL, *ptr=NULL;

int main() {
    int n;
    printf("Enter the size of the list:");
    scanf("%d", &n);

    for (int i=0; i<n;i++) {
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be added:");
        scanf("%d", &new->data);
        new->next=NULL;

        if (first==NULL) {
            first=new;
            ptr=first;
        }else{
            ptr->next=new;
            ptr=new;
        }
    }
    for(ptr=first;prt->!=NULL;ptr=ptr->next){
        printf("%d ", ptr->data);
    }

    return 0;
}
