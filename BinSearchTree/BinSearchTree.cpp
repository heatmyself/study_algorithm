// "Copyright 2019 <Copyright heatmyself>"
// create a class called BinSearchTree
// inorderTreeWalk
// search
// minimum
// maximun
// successor
// insert
// delete
#include<stdio.h>

class BinSearchTree {
 public:
  struct Node {
    int key = 0;
    Node * left = nullptr;
    Node * right = nullptr;
  };

  Node * root = nullptr;
  int Minimun();  // return the minimum key of this tree
};

void _TestBinSearchTree();

int main() {
  return 0;
}

int BinSearchTree::Minimun() {
  Node * pointer = root;
  while ( pointer != nullptr ) {
    pointer = pointer->left;
  }
  return pointer->key;
}

void _TestBinSearchTree() {
}
