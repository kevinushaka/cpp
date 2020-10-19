#include "tree.h"

Tree::Tree(Node& newRoot):root(&newRoot){}

void Tree::setRoot(Node& newRoot){
    root=&newRoot;
}

Node Tree::contains(int value){

}

/*Node contains(int value,Node& pNode){
    if(pNode.getLeftChild()!=nullptr){
        contains(value,pNode->left);
    }
    if(pNode.getLeftChild()!=nullptr){
        _iterateLeftHand(nodes,pNode->right);
    }

}*/


void Tree::insert(int value){

}