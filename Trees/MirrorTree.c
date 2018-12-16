#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *getnewnode(int data) {
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode -> data = data;
	newNode -> left = NULL;
	newNode -> right = NULL;
	return newNode;
}

struct node *generateNewTree() {
	struct node *root = getnewnode(1);
	root->left = getnewnode(9);
	root->right = getnewnode(12);
	root->left->left = getnewnode(4);
	root->left->right = getnewnode(50);
	root->right->right = getnewnode(7);
	return root;
}

struct node *mirrorTree(struct node *root) {
	if(root==NULL) {
		return NULL;
	}
	struct node *newNode = getnewnode(root->data);
	newNode->right = mirrorTree(root->left);
    newNode->left = mirrorTree(root->right);
    return newNode;
}

void inorderTraversal(struct node* nodePtr) {
	if(nodePtr) {
		inorderTraversal(nodePtr->left);
		printf("%d ",nodePtr->data);
		inorderTraversal(nodePtr->right);
	}
}

int main() {
	struct node* mirror, *root = generateNewTree();
	printf("Inorder of original tree\n");
	inorderTraversal(root);
	printf("\n");
	mirror = mirrorTree(root);
	printf("Inorder of mirror tree\n");
	inorderTraversal(mirror);
	return 0;
}
