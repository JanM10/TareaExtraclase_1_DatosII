//
// Created by jmars on 09-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_COLLECTOR_H
#define TAREAEXTRACLASE_1_COLLECTOR_H

#include "Node.h"

class Collector {
public:
    Collector();

    bool Insertar(void* data); //Insertion of nodes to list
    bool BorrarDirColector(void * data);

    int PrintCollector();

    bool RevisarCollector();


    void* GetPuntero();

    int m_Size;

private:
    Node* m_pHead, *m_pTail;

    void *puntero;
    int contador;

};


#endif //TAREAEXTRACLASE_1_COLLECTOR_H
