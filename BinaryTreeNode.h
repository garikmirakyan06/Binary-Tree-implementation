#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H



template <typename T>
class treeNode {
public:
    T data = T();
    treeNode* left = nullptr;
    treeNode* right = nullptr;


    treeNode() {}
    treeNode(T data) : data(data) {}
    treeNode(T data, treeNode* left, treeNode* right) : data(data), left(left), right(right) {}

    bool add_left(treeNode* node);
    bool add_right(treeNode* node);

};


template <typename T>
bool treeNode<T>::add_left(treeNode* node) {
    if(left == nullptr) {
        left = node;
        return true;
    }
    return false;
}

template <typename T>
bool treeNode<T>::add_right(treeNode* node) {
    if(right == nullptr) {
        right = node;
        return true;
    }
    return false;
}



#endif