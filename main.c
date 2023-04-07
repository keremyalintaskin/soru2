#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

int node_topla(struct Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        return node->key + node_topla(node->left) + node_topla(node->right);
    }
}

int toplam_kontrol(struct Node* root) {
    int left_sum = node_topla(root->left);
    int right_sum = node_topla(root->right);

    if (root->key == left_sum + right_sum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct Node* root = (struct Node*) malloc(sizeof(struct Node));
    root->key = 5;
    
    struct Node* left_child = (struct Node*) malloc(sizeof(struct Node));
    left_child->key = 2;
    left_child->left = NULL;
    left_child->right = NULL;

    struct Node* right_child = (struct Node*) malloc(sizeof(struct Node));
    right_child->key = 3;
    right_child->left = NULL;
    right_child->right = NULL;

    root->left = left_child;
    root->right = right_child;

    int result = toplam_kontrol(root);

    if (result) {
        printf("node child'larin toplami kok node'a esittir.\n");
    } else {
        printf("node child'larin toplami kok node'a esit degildir.\n");
    }

    return 0;
}
