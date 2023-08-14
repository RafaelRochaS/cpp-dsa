#ifndef BINARYTREEINTERFACEDEF
#define BINARYTREEINTERFACEDEF

struct BinaryTreeNode {
  int value;
  BinaryTreeNode* leftChild;
  BinaryTreeNode* rightChild;
};

enum TraversalType {
  IN_ORDER,
  PRE_ORDER,
  POST_ORDER
};

class BinaryTree {
  BinaryTree insert(int value);
  void travese(TraversalType type);
  int deleteValue(int value);
  bool find(int value);
  int height();
  int depth();
  int max();
  int min();
};

#endif