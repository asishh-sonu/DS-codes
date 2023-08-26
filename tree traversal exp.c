#include<stdio.h>
#include<stdlib.h>

// structure for a tree node
struct node{
int data;
struct node* left;
struct node* right;
};

// function to create a new tree node
struct node* createNode(int data){
struct node* newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}

// function to perform inorder traversal of a tree
void inorder(struct node* root){
if(root == NULL) return;
inorder(root->left);
printf("%d ", root->data);
inorder(root->right);
}

// function to perform preorder traversal of a tree
void preorder(struct node* root){
if(root == NULL) return;
printf("%d ", root->data);
preorder(root->left);
preorder(root->right);
}

// function to perform postorder traversal of a tree
void postorder(struct node* root){
if(root == NULL) return;
postorder(root->left);
postorder(root->right);
printf("%d ", root->data);
}

// function to build a tree from user input
struct node* buildTree(){
int data;
printf("Enter the data for the node (-1 for no child): ");
scanf("%d", &data);

// return null if no child
if(data == -1) return NULL;

// create the node
struct node* root = createNode(data);

// build the left and right subtrees
printf("Enter left child of %d\n", data);
root->left = buildTree();
printf("Enter right child of %d\n", data);
root->right = buildTree();

return root;
}

int main(){
// build the tree from user input
printf("Building tree from user input...\n");
struct node* root = buildTree();

// perform inorder traversal of the tree
printf("Inorder traversal: ");
inorder(root);
printf("\n");

// perform preorder traversal of the tree
printf("Preorder traversal: ");
preorder(root);
printf("\n");

// perform postorder traversal of the tree
printf("Postorder traversal: ");
postorder(root);
printf("\n");

return 0;
}
