//
// Created by jmars on 06-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_LIST_H
#define TAREAEXTRACLASE_1_LIST_H

#include "Node.h"

class List {
public:
    List(); //Constructor
    ~List(); //Destructor - handles the deletion of nodes

    bool Insertar(int data); //Insertion of nodes to list

    void Print();

private:
    Node* m_pHead, *m_pTail;
    int m_Size;

};


#endif //TAREAEXTRACLASE_1_LIST_H
