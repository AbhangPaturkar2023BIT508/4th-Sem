#include<stdio.h>

struct node{
    int DATA;
    struct node *left, *right;
};

struct node *root = NULL;

struct node *create_node(int val){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->DATA = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


int main(){
    
}
