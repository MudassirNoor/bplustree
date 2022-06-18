#include "BPlusTree.h"
using namespace std;

BPlusTree::BPlusTree(int n) {
    this->rootNode = NULL;
    this->MAX = n;
}

BPlusTree::BPlusTree(const BPlusTree &b) {

}

BPlusTree::~BPlusTree() {

}

bool BPlusTree::insert(int key, string value) {
    if (this->rootNode == NULL) {
        this->rootNode = new BPTreeNode(this->MAX, nullptr);

    }
}

bool BPlusTree::remove(int key) {

}

string BPlusTree::find(int key) {

}

void BPlusTree::printKeys() {

}

void BPlusTree::printValues() {

}