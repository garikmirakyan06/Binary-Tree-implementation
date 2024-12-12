#include <iostream>
#include "BinaryTreeNode.h"
#include "BinaryTree.h"


int main() {
    treeNode<int>* r = new treeNode<int>(1),
    *n1 = new treeNode<int>(2), *n2 = new treeNode<int>(3), *n3 = new treeNode<int>(4), *n4 = new treeNode<int>(5);


    r->add_left(n1);
    r->add_right(n2);

    n1->add_left(n3);
    n1->add_right(n4);

    tree<int> MyTree(r);

    MyTree.print_BFS();
    MyTree.print_preorder();
    MyTree.print_inorder();
    MyTree.print_postorder();



    return 0;
}