#include "BPTreeNode.h"
using namespace std;

BPTreeNode::BPTreeNode(int n, BPTreeNode* parent) {
    this->keysCount = 0;
    this->children = new BPTreeNode*[n+1];
    this->keys = new int[n];
    this->parent = parent;
}

BPTreeNode::~BPTreeNode(){

}