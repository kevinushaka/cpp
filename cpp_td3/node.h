#ifndef NODE_H
#define NODE_H

#include<iostream>

class Node{
    private:
        int value=0;
        Node* left=nullptr;
        Node* right=nullptr;
    public:

        //Constructors
        Node(int nValue=0);
        Node(Node& pLeft,Node& pRight,int nValue=0);
        Node(const Node& node);

        //Getters
        int getValue()const;
        Node getLeftChild()const;
        Node getRightChild()const;

        //Setters
        void setValue(int nValue);
        void setLefttChild(Node& pLeft);
        void setRightChild(Node& pRight);

        //Functions
        void removeAllChildren();
        void iterateLeftHand();


        //Operators
        friend std::ostream& operator<<(std::ostream& os, const Node& p);

};

#endif