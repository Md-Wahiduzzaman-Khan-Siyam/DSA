#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


int main()
{
    struct Node *a, *b, *c;
    a = b = c = (struct Node *)malloc(sizeof(struct Node));
    //b = (struct Node *)malloc(sizeof(struct Node));
    //c = (struct Node *)malloc(sizeof(struct Node));

    a -> data = 1;
    b -> data = 10;
    c -> data = 100;

    a -> next = b;
    b -> next = c;
    c -> next = NULL;

    while(a != NULL){
        printf("%d -> ", a -> data);
        a = a -> next;
    }
}
