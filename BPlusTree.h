#ifndef BPLUSTREE_H
#define BPLUSTREE_H

#include "iostream"
#include "BPTreeNode.h"
using namespace std;

class BPlusTree {
    public:
    BPlusTree(int);
    BPlusTree(const BPlusTree& b);
    ~BPlusTree();
    bool insert(int key, string value);
    bool remove(int key);
    string find(int key);
    void printKeys();
    void printValues();

    private:
    BPTreeNode* rootNode;
    int MAX;
};

#endif