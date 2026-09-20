#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};


Node* insertBST(Node* root, int x) {
    if (root == nullptr)
        return new Node(x);

    if (x < root->data)
        root->left = insertBST(root->left, x);
    else
        root->right = insertBST(root->right, x);

    return root;
}


void rightLevelOrder(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();

        cout << cur->data << " ";

        
        if (cur->right)
            q.push(cur->right);
        if (cur->left)
            q.push(cur->left);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        Node* root = nullptr;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            root = insertBST(root, x);
        }

        rightLevelOrder(root);
        cout << '\n';
    }

    return 0;
}
