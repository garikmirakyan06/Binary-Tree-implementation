#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include "BinaryTreeNode.h"
#include <queue>
#include <iostream>


template <class T>
class tree {
private:
    treeNode<T>* root;

    void print_preorder_helper(treeNode<T>* node);
    void print_inorder_helper(treeNode<T>* node);
    void print_postorder_helper(treeNode<T>* node);

public:
    tree() : root(nullptr) {}
    tree(treeNode<T>* r) : root(r) {}

    // bfs traversal 
    void print_BFS(treeNode<T>* start = nullptr); // level vise
    
    // dfs travlersals
    void print_preorder();
    void print_inorder();
    void print_postorder();

};


template <class T>
void tree<T>::print_postorder() {
    std::cout << "postorder: " << '\n';
    if(root)
        print_postorder_helper(root);
    std::cout << '\n';
}

template <class T>
void tree<T>::print_postorder_helper(treeNode<T>* node) {
    if(node->left)
        print_postorder_helper(node->left);
    if(node->right)
        print_postorder_helper(node->right);
    std::cout << node->data << ' ';
}


template <class T>
void tree<T>::print_inorder() {
    std::cout << "inorder: " << '\n';
    if(root)
        print_inorder_helper(root);
    std::cout << '\n';
}

template <class T>
void tree<T>::print_inorder_helper(treeNode<T>* node) {
    if(node->left)
        print_inorder_helper(node->left);
    std::cout << node->data << ' ';
    if(node->right)
        print_inorder_helper(node->right);
}

template <typename T>
void tree<T>::print_preorder_helper(treeNode<T>* node) {
    std::cout << node->data << " ";
    if(node->left)
        print_preorder_helper(node->left);
    if(node->right)
        print_preorder_helper(node->right);
}

template <typename T>
void tree<T>::print_preorder() {
    std::cout << "preorder: \n";
    if(root != nullptr) {
        print_preorder_helper(root);
    }
    std::cout << '\n';
}


// Time complexity - O(n)
template <typename T>
void tree<T>::print_BFS(treeNode<T>* start) {
    std::cout << "BFS traversal: \n";
    if(!start) {
        start = root;
    }

    std::queue<treeNode<T>*> q;
    q.push(start);

    while(!q.empty()) {
        treeNode<T>* fr = q.front();
        std::cout << fr->data << ' ';
        q.pop();

        if(fr->left) {
            q.push(fr->left);
        }
        if(fr->right) {
            q.push(fr->right);
        }
    }
    std::cout << '\n';

}





#endif
