#include <stdio.h>
#include <stdlib.h>

int treetraversal(void);
 
typedef struct node {
	int data;
	struct node *left;
	struct node *right;
} node;
	
 
node *create() {
	node *p;
	int x;
	
	printf("(-1 for no data): ");
	scanf("%d", &x);
	if (x == -1) {
		return NULL;
	}
	p = (node*)malloc(sizeof(node));
	p -> data = x;
	printf("Enter left child node of %d ", x);
	p -> left = create();
 
	printf("Enter right child node of %d ", x);
	p -> right = create();
	return p;
}

int main() {
	treetraversal();
	
	return 0;
}
 
void preorder(node *t) {
	if (t != NULL) {
		printf("%d ",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}

void postorder(node *t) {
	if (t != NULL) {
		postorder(t->left);
		postorder(t->right);
		printf("%d ", t->data);
	}
}

void inorder(node *t) {
	if (t != NULL) {
		inorder(t->left);
		printf("%d ",t->data);
		inorder(t->right);
	}
}

void levelGiven(node *t, int level){
	if(t == NULL){
		return;
	}else if(level == 0){
		printf("%d ", t->data);
	}else{
		levelGiven(t->left, level - 1);
		levelGiven(t->right, level - 1);
	}
}

int getHeight(node *t){
	int left_side;
	int right_side;
	
	if (t == NULL){
		return -1;
	} else {
		left_side = getHeight(t->left);
		right_side = getHeight(t->right);
	
	if (left_side > right_side) {
		return left_side + 1;
	} else
		return right_side + 1;
	}
}

void breadthFirst(node *t) {
	int level;
	int height = getHeight(t);
	
	for (level = 0; level <= height; level++){
		levelGiven(t, level);
	}
}

int treetraversal(void){
	printf("Enter root node ");
	 
	node *root;
	root = create();
	
	printf("\nPre-order tree traversal: ");
	preorder(root);
	
	printf("\nPost-order tree traversal: ");
	postorder(root);
	
	printf("\nInorder tree traversal: ");
	inorder(root);
	
	printf("\nBreadth-first tree traversal: ");
	breadthFirst(root);
	
	printf("\n");
}
