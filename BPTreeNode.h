#ifndef BPTREENODE_H
#define BPTREENODE_H

#include "iostream"
#include "BPlusTree.h"
using namespace std;

class BPTreeNode {
    public:
    int* keys;
    bool isLeaf;
    BPTreeNode* parent;
    BPTreeNode** children;
    string value;

    BPTreeNode(int n, BPTreeNode* parent);
    ~BPTreeNode();
    friend class BPlusTree

    private:
    int keysCount;
};

#endif
