#include "NodeStructure.h"
using namespace std;

void NumberList::appendNumber(int number) {
    TreeNode* newNode = new TreeNode(number);
    if (!headNode) {
        headNode = tailNode = newNode;
    }
    else {
        tailNode->nextNode = newNode;
        tailNode = newNode;
    }
}

void BinarySearchTree::insertNode(TreeNode*& current, TreeNode*& newNode) {
    if (current == nullptr) {
        current = newNode;
    }
    else if (newNode->value < current->value) {
        insertNode(current->leftChild, newNode);
    }
    else {
        insertNode(current->rightChild, newNode);
    }
}

void BinarySearchTree::traverseInOrder(TreeNode* node) {
    if (node) {
        traverseInOrder(node->leftChild);
        cout << node->value << " ";
        traverseInOrder(node->rightChild);
    }
}

void BinarySearchTree::traversePreOrder(TreeNode* node) {
    if (node) {
        cout << node->value << " ";
        traversePreOrder(node->leftChild);
        traversePreOrder(node->rightChild);
    }
}

void BinarySearchTree::traversePostOrder(TreeNode* node) {
    if (node) {
        traversePostOrder(node->leftChild);
        traversePostOrder(node->rightChild);
        cout << node->value << " ";
    }
}
