#ifndef NODE_STRUCTURE_H
#define NODE_STRUCTURE_H

#include <iostream>

struct TreeNode {
    int value;
    TreeNode* leftChild;
    TreeNode* rightChild;
    TreeNode* nextNode;

    TreeNode(int val) : value(val), leftChild(nullptr), rightChild(nullptr), nextNode(nullptr) {}
};

class NumberList {
public:
    TreeNode* headNode;
    TreeNode* tailNode;
    NumberList() : headNode(nullptr), tailNode(nullptr) {}
    void appendNumber(int number);
};

class BinarySearchTree {
public:
    TreeNode* rootNode;
    BinarySearchTree() : rootNode(nullptr) {}
    void insertNode(TreeNode*& current, TreeNode*& newNode);
    void traverseInOrder(TreeNode* node);
    void traversePreOrder(TreeNode* node);
    void traversePostOrder(TreeNode* node);
};

#endif
