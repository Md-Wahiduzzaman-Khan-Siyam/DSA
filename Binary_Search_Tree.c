#include <stdio.h>
#include <stdlib.h>

struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
};
typedef struct treeNode treeNd;

treeNd *creat(int data)
{
    treeNd *tmp = (treeNd *)malloc(sizeof(treeNd));
    tmp->data = data;
    tmp->left = tmp->right = NULL;
    return tmp;
}

treeNd *insert(treeNd *root, int data)
{
    if(root == NULL) root = creat(data);
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

void print(treeNd *root)
{
    if(root == NULL) return;
    print(root->left);
    printf("%d ", root->data);
    print(root->right);
}

int main()
{
    treeNd *in = NULL;
    in = insert(in, 50);
    in = insert(in, 30);
    in = insert(in, 20);
    in = insert(in, 40);
    in = insert(in, 70);
    in = insert(in, 60);
    in = insert(in, 80);
    print(in);
}
