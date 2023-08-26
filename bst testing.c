#include <stdio.h>
#include <stdlib.h>

struct suu {
  int data; 
  struct suu *right_child; 
  struct suu *left_child; 
};

struct suu* newsuu(int x) {
  struct suu *temp;
  temp = malloc(sizeof(struct suu));
  temp -> data = x;
  temp -> left_child = NULL;
  temp -> right_child = NULL;

  return temp;
}
struct suu* insert(struct suu * root, int x) {
  if (root == NULL)
    return newsuu(x);
  else if (x > root -> data)
      root -> right_child = insert(root -> right_child, x);
  else 
    root -> left_child = insert(root -> left_child, x);
  return root;
}

struct suu* find_minimum(struct suu * root) {
  if (root == NULL)
    return NULL;
  else if (root -> left_child != NULL) 
    return find_minimum(root -> left_child); 
  return root;
}

struct suu* delete(struct suu * root, int x) {
  if (root == NULL)
    return NULL;
  if (x > root -> data)
    root -> right_child = delete(root -> right_child, x);
  else if (x < root -> data)
    root -> left_child = delete(root -> left_child, x);
  else {
    if (root -> left_child == NULL && root -> right_child == NULL) {
      free(root);
      return NULL;
    }

    else if (root -> left_child == NULL || root -> right_child == NULL) {
      struct suu *temp;
      if (root -> left_child == NULL)
        temp = root -> right_child;
      else
        temp = root -> left_child;
      free(root);
      return temp;
    }

    else {
      struct suu *temp = find_minimum(root -> right_child);
      root -> data = temp -> data;
      root -> right_child = delete(root -> right_child, temp -> data);
    }
  }
  return root;
}

void inorder(struct suu *root) {
  if (root != NULL) 
  {
    inorder(root -> left_child); 
    printf(" %d ", root -> data); 
    inorder(root -> right_child); 
  }
}

int main() {
  struct suu *root;
  int nodes[20],d,i=0;
  printf("How many elements you want to insert ");
  scanf("%d",&d);
  for (int i = 0; i < d; i++)
  {
    printf("Enter value at %dth ",i+1);
    scanf("%d",&nodes[i]);
  }
printf("Current state of\n");
  for (int i = 0; i < d; i++)
  {
  root = newsuu(nodes[i]);
  inorder(root);
  }
 printf("\n");
  int p;
while (1)
{
    

printf("1.For Delection of node\n2.For Exit ");
scanf("%d",&p);
if (p==1)
{
    int z;
    printf("Which Element you want to delete\n");
    scanf("%d",&z);

  root = delete(root, z);
  inorder(root);
  printf("\n");
}
}

  return 0;
}
