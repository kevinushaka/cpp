#ifndef TREE_H
#define TREE_H

#include "node.h"

class Tree{
    private:
        Node* root;
    public:

        Tree(Node& newRoot);

        void setRoot(Node& newRoot);
        Node contains(int value);
        void insert(int value);
};

#endif