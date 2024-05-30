#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int id;
    char name[30];
    struct node *next;
};
typedef struct node Node;
Node *head = NULL;

void insert_Bgn(int n, char nm[])
{
    Node *tmp1 = (Node *)malloc(sizeof(Node));
    tmp1->id = n;
    strcpy(tmp1->name, nm);
    tmp1->next = head;
    head = tmp1;
}

void insert_Mid()
{
    int data;
    scanf("%d", &data);

    Node *tmp1 = (Node *)malloc(sizeof(Node));
    tmp1->id = 999;
    strcpy(tmp1->name, "VENOM");

    Node *tmp2 = head;
    while(tmp2->next != NULL){
        if(tmp2->id == data) break;
        tmp2 = tmp2->next;
    }
    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
}

void insert_End(int n, char nm[])
{
    Node *tmp1 = (Node *)malloc(sizeof(Node));
    tmp1->id = n;
    strcpy(tmp1->name, nm);
    tmp1->next = NULL;

    if(head == NULL){
        head = tmp1;
    }
    else{
        Node *tmp2 = head;
        while(tmp2->next != NULL){
            tmp2 = tmp2->next;
        }
        tmp2->next = tmp1;
    }
    //return head;
}

void print()
{
    Node *nn = head;
    while(nn != NULL){
        printf("%d %s -> ", nn->id, nn->name);
        nn = nn->next;
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int a;
        char b[30];
        scanf("%d %[^\n]", &a, b);
        //insert_End(a, b);
        insert_Bgn(a, b);
        if(!t)insert_Mid(a, b);
        print();
    }
    //print();
}
