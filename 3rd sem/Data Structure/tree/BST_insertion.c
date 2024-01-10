#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void insertionKey(struct Node *root,int key)
{

    struct Node *prev = NULL;
    struct Node *ptr = createNode(key);
    while(root != NULL)
    {
        prev = root;
        if(root->data == key)
        {
            printf("No duplicate Value Allowed...!!!\n");
            return;
        }
        else if(root->data < key)
        {
            root = root->right;
        }
        else if(root->data > key)
        {
            root=root->left;
        }
    }
    if(prev->data > key)
    {
        prev->left = ptr;
    }
    else if(prev->data < key)
    {
        prev->right = ptr;
    }
}

void inOrderSort(struct Node *root)
{
    if(root != NULL)
    {
    inOrderSort(root->left);
    printf("%d\t",root->data);
    inOrderSort(root->right);
    }
}
int main()
{
    struct Node *root = createNode(50);
    struct Node *second = createNode(40);
    struct Node *third = createNode(60);
    struct Node *fourth = createNode(20);
    struct Node *fifth = createNode(45);
    struct Node *sixth = createNode(55);
    struct Node *seventh = createNode(70);
    root->left=second;
    root->right=third;
    second->left=fourth;
    second->right=fifth;
    third->left=sixth;
    third->right=seventh;
    insertionKey(root,101);
    insertionKey(root,1);
    insertionKey(root,81);
    insertionKey(root,35);
    insertionKey(root,35);
    inOrderSort(root);
    return 0;
}