#include "node.h"
#include <iostream>

int main(){

    Node nB(1), nC(2);
    Node nA(nB,nC);
    Node nD(3),nE(4),nF(5),nG(6);
    nB.setLefttChild(nD);
    nB.setRightChild(nE);
    nC.setLefttChild(nF);
    nC.setRightChild(nG);
    std::cout<<nA<<std::endl;
    std::cout<<nB<<std::endl;
    std::cout<<nC<<std::endl;
    std::cout<<nD<<std::endl;
    std::cout<<nE<<std::endl;
    std::cout<<nF<<std::endl;
    std::cout<<nG<<std::endl;

    std::vector<Node> infixe=nA.iterateLeftHand(); 
    for(Node node:infixe){
        std::cout<<node.getValue()<<" ";
    }

    return 0;
}