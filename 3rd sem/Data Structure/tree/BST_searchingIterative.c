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
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int isIterativeSearch(struct Node *root,int data)
{
    while(root != NULL)
    {
        if(root->data == data)
        {
            return 1;
        }
        if(data < root->data){
            root = root->left;
        }
        if(data > root->data){
            root = root->right;
        }
    }
    return 0;
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
    if(isIterativeSearch(root,70))
    {
        printf("FOUND...!!!");
    }
    else
    {
        printf("NOT FOUND...!!!");
    }

}