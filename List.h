//
// Created by jmars on 06-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_LIST_H
#define TAREAEXTRACLASE_1_LIST_H

#include "Node.h"

///Clase List.
///Esta clase se encarga de almacenar enteros en una lista enlazada.
class List {
public:
    ///List es el constructor.
    List();
    ///Insertar, insterta un entero dentro de la lista.
    bool Insertar(int data);

    ///EliminarDato, borra un entero dentro de la lista.
    bool EliminarDato(int data);

    ///Print, imprime los datos dentro de List.
    void Print();

private:
    Node* m_pHead, *m_pTail;
    int m_Size;

};

#endif //TAREAEXTRACLASE_1_LIST_H
