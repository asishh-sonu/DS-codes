#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>  
   
//Represent a node of binary tree  
struct node{  
    int data;  
    struct node *left;  
    struct node *right;  
};  
   
//Represent the root of binary tree  
struct node *root= NULL;  
   
//createNode() will create a new node  
struct node* createNode(int data){  
    //Create a new node  
    struct node newNode = (struct node)malloc(sizeof(struct node));  
    //Assign data to newNode, set left and right children to NULL  
    newNode->data= data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
      
    return newNode;  
}  
   
//insert() will add new node to the binary search tree  
void insert(int data) {  
    //Create a new node  
    struct node *newNode = createNode(data);  
      
    //Check whether tree is empty  
    if(root == NULL){  
        root = newNode;  
        return;  
      }  
    else {  
        //current node point to root of the tree  
        struct node *current = root, *parent = NULL;  
          
        while(true) {  
            //parent keep track of the parent node of current node.  
            parent = current;  
   
            //If data is less than current's data, node will be inserted to the left of tree  
            if(data < current->data) {  
                current = current->left;  
                if(current == NULL) {  
                    parent->left = newNode;  
                    return;  
                }  
            }  
            //If data is greater than current's data, node will be inserted to the right of tree  
            else {  
                current = current->right;  
                if(current == NULL) {  
                    parent->right = newNode;  
                    return;  
                }  
            }  
        }  
    }  
}  
   
//minNode() will find out the minimum node  
struct node* minNode(struct node *root) {  
    if (root->left != NULL)  
        return minNode(root->left);  
    else   
        return root;  
}   
   
//deleteNode() will delete the given node from the binary search tree  
struct node* deleteNode(struct node *node, int value) {  
    if(node == NULL){  
          return NULL;  
     }  
    else {  
        //value is less than node's data then, search the value in left subtree  
        if(value < node->data)  
            node->left = deleteNode(node->left, value);  
          
        //value is greater than node's data then, search the value in right subtree  
        else if(value > node->data)  
            node->right = deleteNode(node->right, value);  
          
        //If value is equal to node's data that is, we have found the node to be deleted  
        else {  
            //If node to be deleted has no child then, set the node to NULL  
            if(node->left == NULL && node->right == NULL)  
                node = NULL;  
              
            //If node to be deleted has only one right child  
            else if(node->left == NULL) {  
                node = node->right;  
            }  
              
            //If node to be deleted has only one left child  
            else if(node->right == NULL) {  
                node = node->left;  
            }  
              
            //If node to be deleted has two children node  
            else {  
                //then find the minimum node from right subtree  
                struct node *temp = minNode(node->right);  
                //Exchange the data between node and temp  
                node->data = temp->data;  
                //Delete the node duplicate node from right subtree  
                node->right = deleteNode(node->right, temp->data);  
            }  
        }  
        return node;  
    }  
}  
   
//inorder() will perform inorder traversal on binary search tree  
void inorderTraversal(struct node *node) {  
        
    //Check whether tree is empty  
    if(root == NULL){  
        printf("Tree is empty\n");  
          return;  
     }  
    else {  
            
        if(node->left!= NULL)  
            inorderTraversal(node->left);  
        printf("%d ", node->data);  
        if(node->right!= NULL)  
          inorderTraversal(node->right);  
            
    }        
}  
        
int main()  
{  
    //Add nodes to the binary tree  
    insert(50);  
    insert(30);  
    insert(70);  
    insert(60);  
    insert(10);  
    insert(90);  
      
    printf("Binary search tree after insertion: \n");  
    //Displays the binary tree  
    inorderTraversal(root);  
      
    struct node *deletedNode = NULL;  
    //Deletes node 90 which has no child  
    deletedNode = deleteNode(root, 90);  
    printf("\nBinary search tree after deleting node 90: \n");  
    inorderTraversal(root);  
      
    //Deletes node 30 which has one child  
    deletedNode = deleteNode(root, 30);  
    printf("\nBinary search tree after deleting node 30: \n");  
    inorderTraversal(root);  
      
    //Deletes node 50 which has two children  
    deletedNode = deleteNode(root, 50);  
    printf("\nBinary search tree after deleting node 50: \n");  
    inorderTraversal(root);  
   
    return 0;  
}