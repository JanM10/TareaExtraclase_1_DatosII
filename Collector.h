//
// Created by jmars on 09-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_COLLECTOR_H
#define TAREAEXTRACLASE_1_COLLECTOR_H

#include "Node.h"
///Clase Collector.
///Esta clase se encarga de almacenar punteros para luego ser reutilizados.
class Collector {
public:
    ///Collector es el constructor.
    Collector();

    ///Insertar, insterta un puntero dentro de Collector.
    bool Insertar(void* data);

    ///BorrarDirColector, borra un puntero dentro de Collector.
    bool BorrarDirColector(void * data);

    ///PrintCollector, imprime los datos dentro de Collector.
    int PrintCollector();

    ///RevisarCollector, revisa si la lista Collector esta vacia o no.
    bool RevisarCollector();

    ///GetPuntero, devuelve un puntero.
    void* GetPuntero();

    ///m_Size, esta variable matiene el numero de cuantos punteros hay dentro de Collector.
    int m_Size;

private:
    Node* m_pHead, *m_pTail;

    void *puntero;
    int contador;

};


#endif //TAREAEXTRACLASE_1_COLLECTOR_H
