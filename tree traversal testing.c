#include <stdio.h>  
#include <stdlib.h>  
  
struct node {  
    int element;  
    struct node* left;  
    struct node* right;  
};  
  
//To create a new node/  
struct node* createNode(int val)  
{  
    struct node* Node = (struct node*)malloc(sizeof(struct node));  
    Node->element = val;  
    Node->left = NULL;  
    Node->right = NULL;  
  
    return (Node);  
}  
  
//function to traverse the nodes of binary tree in preorder/  
void traversePreorder(struct node* root)  
{  
    if (root == NULL)  
        return;  
    printf(" %d ", root->element);  
    traversePreorder(root->left);  
    traversePreorder(root->right);  
}  
  
  
//function to traverse the nodes of binary tree in Inorder/  
void traverseInorder(struct node* root)  
{  
    if (root == NULL)  
        return;  
    traverseInorder(root->left);  
    printf(" %d ", root->element);  
    traverseInorder(root->right);  
}  
  
//function to traverse the nodes of binary tree in postorder/  
void traversePostorder(struct node* root)  
{  
    if (root == NULL)  
        return;  
    traversePostorder(root->left);  
    traversePostorder(root->right);  
    printf(" %d ", root->element);  
}  
  
  
int main()  
{  
    struct node* root = createNode(1);  
    root->left = createNode(3);  
    root->right = createNode(7);  
    root->left->left = createNode(5);  
    root->left->left->left = createNode(4);  
    root->left->left->right = createNode(6);  
    root->right->right = createNode(9);  
    root->right->left = createNode(8);  
    root->right->right->right = createNode(10);  
    root->right->right->left = createNode(11);
    root->right->right->right->right = createNode(12);  
  
    printf("\n The Preorder traversal of given binary tree is -\n");  
    traversePreorder(root);  
      
    printf("\n The Inorder traversal of given binary tree is -\n");  
    traverseInorder(root);  
      
    printf("\n The Postorder traversal of given binary tree is -\n");  
    traversePostorder(root);  
  
    return 0;  
}
