#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *creatNode(int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void Print(struct Node *root)
{
    if(root == NULL) return;
    Print(root->left);
    printf("%d -> ", root->data);
    Print(root->right);
}

int main()
{
    struct Node *root = creatNode(1);
    root->left = creatNode(2);
    root->right = creatNode(3);
    root->left->left = creatNode(4);
    root->left->right = creatNode(5);
    root->right->left = creatNode(6);
    root->right->right = creatNode(7);

    Print(root);
}
