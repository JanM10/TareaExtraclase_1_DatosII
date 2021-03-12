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

    void SetPuntero(void *puntero);
    void* GetPuntero();

private:
    Node* m_pHead, *m_pTail;
    int m_Size;
    void *puntero;

};


#endif //TAREAEXTRACLASE_1_COLLECTOR_H
