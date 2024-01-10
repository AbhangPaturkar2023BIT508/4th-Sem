#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void inOrderTraversal(struct Node *root)
{
    if(root != NULL)
    {
    inOrderTraversal(root->left);
    printf("%d\t",root->data);
    inOrderTraversal(root->right);
    }
}
struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

/*
         50
       /   \
     30    70
    /  \  /  \
   20  4060  80
  / \
15   25
  
*/

 struct Node *deleteNode(struct Node *root,int key)
 {
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data > key)
    {
        root->left = deleteNode(root->left,key); //stack I 50  // stack II 30 // stack II 20 
    }
    else if(root->data < key)
    {
        root->right= deleteNode(root->right,key);
    }
    else
    {
        if(root->left == NULL)
        {
            struct Node *temp = root->right; //NULL
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        struct Node *temp = root->right;
        while(temp->left != NULL)
        {
            temp = temp->left;
        }
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);

    }
    return root;
 }

int main()
{
    // struct Node *root1 = NULL;
    // inOrderTraversal(root1);
    // printf("\n");
    // deleteNode(root1,70);
    // inOrderTraversal(root1);
    // printf("\n");
    struct Node *root = createNode(50);
    struct Node *second = createNode(30);
    struct Node *third = createNode(70);
    struct Node *fourth = createNode(20);
    struct Node *fifth = createNode(40);
    struct Node *sixth = createNode(60);
    struct Node *seventh = createNode(80);
    struct Node *eight = createNode(15);
    struct Node *nineth = createNode(25);
    root->left=second;
    root->right=third;
    second->left=fourth;
    second->right=fifth;
    third->left=sixth;
    third->right=seventh;
    fourth->left=eight;
    fourth->right=nineth;
    inOrderTraversal(root);
    printf("\n");
    deleteNode(root,30);
    inOrderTraversal(root);
    printf("\n");
}