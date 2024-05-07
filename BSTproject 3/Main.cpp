#include <iostream>
#include <cstdlib>
#include <ctime>
#include "NodeStructure.h"

using namespace std;

int main() {
    srand(time(NULL));  
    NumberList myList;
    BinarySearchTree myTree;

    for (int i = 0; i < 40; i++) {
        int num = rand() % 100;
        myList.appendNumber(num);
        TreeNode* newNode = new TreeNode(num);
        myTree.insertNode(myTree.rootNode, newNode);
    }

    cout << "Original numbers in linked list order:\n";
    TreeNode* current = myList.headNode;
    while (current) {
        cout << current->value << " ";
        current = current->nextNode;
    }
    cout << "\n\n";

    cout << "BST Inorder Traversal:\n";
    myTree.traverseInOrder(myTree.rootNode);
    cout << "\n";

    cout << "BST Preorder Traversal:\n";
    myTree.traversePreOrder(myTree.rootNode);
    cout << "\n";

    cout << "BST Postorder Traversal:\n";
    myTree.traversePostOrder(myTree.rootNode);
    cout << "\n";

    return 0;
}
