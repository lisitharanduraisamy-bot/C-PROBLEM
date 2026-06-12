#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *newNode(int x) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *insert(struct node *r, int x) {
    if (r == NULL) {
        return newNode(x);
    }

    if (x < r->data) {
        r->left = insert(r->left, x);
    } else {
        r->right = insert(r->right, x);
    }

    return r;
}

void inorder(struct node *r) {
    if (r != NULL) {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}

int main() {
    struct node *root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);

    printf("Inorder Traversal: ");
    inorder(root);

    return 0;
}
