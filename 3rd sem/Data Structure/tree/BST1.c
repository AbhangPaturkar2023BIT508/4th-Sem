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
    struct  Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left = NULL;
    n->right=NULL;
    return n;
}
int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if(root != NULL)
    {
        if(!isBST(root->left)) //39 
        {
            return 0;
        }
        if(prev != NULL && prev->data >= root->data) // 39 >= 40
        {
            return 0;
        }
        prev=root;//39
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
int main()
{

     /*
     
         39
        /  \
       29   40
      / \
     10  35   

     */
    struct Node *root = createNode(36);
    struct Node *second = createNode(29);
    struct Node *third = createNode(40);
    struct Node *fourth = createNode(10);
    struct Node *fifth = createNode(35);
    root->left=second;
    root->right=third;
    second->left=fourth;
    second->right=fifth;
    if(isBST(root))
    {
        printf("BINARY SEARCH TREE");
    }
    else
    {
        printf("NOT BINARY SEARCH TREE");
    }
}