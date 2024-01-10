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
    n->data = data;
    n->left = NULL;
    n->right=NULL;
    return n;
}
void PreorderTraversal(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d\t",root->data);
        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }
}

void PostOrderTraversal(struct Node *root)
{
    if(root != NULL)
    {
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        printf("%d\t",root->data);
    }
}

void InOrderTraversal(struct Node *root)
{
    if(root != NULL)
    {
        InOrderTraversal(root->left);
        printf("%d\t",root->data);
        InOrderTraversal(root->right);
    }
}

int searchBST(int data,struct Node *root)
{
    if(root != NULL)
    {
        if(root->data == data)
        {
            return 1;
        }
        if(root->data > data)
        {
           
            searchBST(data,root->left);
        }
        if(root->data < data)
        {
            searchBST(data,root->right);
        }
    }
    return 0;
}
int main()
{
    struct Node *root   = createNode(10);
    struct Node *second = createNode(20);
    struct Node *third  = createNode(30);
    struct Node *fourth = createNode(40);
    struct Node *fifth  = createNode(50);
    struct Node *sixth  = createNode(60);
    root->left    = second;
    root->right   = third;
    second->left  = fourth;
    second->right = fifth;
    third->right   = sixth;
    PreorderTraversal(root);
    printf("\n");
    PostOrderTraversal(root);
    printf("\n");
    InOrderTraversal(root);
    printf("\n");
    if(searchBST(150,root))
    {
        printf("The Given Value is Found...");
    }
    else
    {
        printf("The Given Value is NOT found...!");
    }
    
}