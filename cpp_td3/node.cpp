#include "node.h"


Node::Node(int nValue):value(nValue),right(nullptr),left(nullptr){}
Node::Node(Node& pLeft,Node& pRight,int nValue):
left(&pLeft),right(&pRight),value(nValue){}

Node::Node(const Node& node){
    this->left=node.left;
    this->right=node.right;
    this->value=node.value;
}


int Node::getValue()const{ return this->value;}
Node Node::getLeftChild()const{return *this->left;}
Node Node::getRightChild()const{return *this->right;}


void Node::setValue(int nValue){this->value=nValue;}
void Node::setLefttChild(Node& pLeft){this->left=&pLeft;}
void Node::setRightChild(Node& pRight){this->right=&pRight;}


void Node::removeAllChildren(){
        this->right=nullptr;
        this->left=nullptr;

}

std::vector<Node> Node::iterateLeftHand(){
    std::vector<Node> nodes;
    _iterateLeftHand(nodes,this);
    return nodes;
}

void Node::_iterateLeftHand(std::vector<Node>& nodes,Node* pNode){
    nodes.push_back(*(pNode));
    if(pNode->left!=nullptr){
        _iterateLeftHand(nodes,pNode->left);
    }
    if(pNode->right!=nullptr){
        _iterateLeftHand(nodes,pNode->right);
    }
}

std::ostream& operator<<(std::ostream& os, const Node& p){
     os<< "Node@"<<&p<<"{";
    os<< "Value : "<< p.value<<" ,";
    if(p.left!=nullptr){
       
        os<< "Left@ : "<< p.left<<" ,";
        os<< "Right@ : "<< p.right<<"}";
    }else{
        os<< "Left@ : ,";
        os<< "Right@ : }";
    }
    return os;
}