#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};


Node* insertBST(Node* root, int x) {
    if (root == NULL) {
        return new Node(x);
    }
    if (x < root->data) {
        root->left = insertBST(root->left, x);
    } else {
        root->right = insertBST(root->right, x);
    }
    return root;
}


void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        Node* root = NULL;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            root = insertBST(root, x);
        }

        preorder(root);
        cout << "\n";
    }
    return 0;
}
