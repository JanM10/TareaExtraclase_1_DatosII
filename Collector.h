//
// Created by jmars on 09-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_COLLECTOR_H
#define TAREAEXTRACLASE_1_COLLECTOR_H

#include "Node.h"

class Collector {
public:
    Collector();

    bool Insertar(int data); //Insertion of nodes to list

    void Print();

private:
    Node* m_pHead, *m_pTail;
    int m_Size;

};


#endif //TAREAEXTRACLASE_1_COLLECTOR_H
