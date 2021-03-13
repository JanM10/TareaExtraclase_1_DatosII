//
// Created by jmars on 08-Mar-21.
//
#include <cstdlib>
#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"

using namespace std;

Collector *colecotor = new Collector();

///Node, constructor.
///Inicializa los datos de la clase Node.
Node::Node() {
    SetData(0);
    SetNext(pNext);
    SetPuntero(puntero);
    GetPuntero();
}

///Operator new es una sobrecarga del metodo new.
///Operator new se encarga de crear un nodo nuevo para List, en caso de haber uno en Collector entoces se reutiliza.
void * Node::operator new(size_t _newData) {
    cout<< "Overloading new operator with size: " << _newData << endl;
//    cout << "CUANTO VALE M: " << colecotor->m_Size << endl;
    if (colecotor->m_Size > 0){
        void * puntero = colecotor->GetPuntero();
//        colecotor->BorrarDirColector(puntero);
        colecotor->m_Size--;
//        cout << "PUNTERO: " << puntero << endl;
        return puntero;
    }else{
        void *puntero = :: new Node();
//        cout << "size: " << colecotor->m_Size << endl;
//        cout << "NUEVO: " << puntero << endl;
        return puntero;
    }
}

///Operator delete es una sobrecarga del metodo delete.
///Operator delete en lugar de borrar el dato por completo manda el puntero a Collector para asi reutilizarse.
void Node::operator delete(void* _newNext) {
    cout<< "Overloading delete operator " << endl;
    colecotor->Insertar(_newNext); //Se esta pasando la direccion de memoria de newNext no la correcta
    colecotor->PrintCollector();

}

///Node, crea un nuevo nodo.
///Este Node permite un dato de tipo entero y otro de tipo Node.
Node::Node(int _newData, Node *_pNewNext) {
    SetData(_newData);
    SetNext(_pNewNext);
}

///Node, crea un nuevo nodo.
///Este Node permite un dato de tipo puntero y otro de tipo Node.
Node::Node(void *puntero, Node *_next) {
    SetPuntero(puntero);
    SetNext(_next);
}

///GetData, regresa el dato de tipo entero dentro de un nodo.
int Node::GetData() {
    return this->Data;
}

///GetNext, regresa el siguente puntero.
Node* Node::GetNext() {
    return this->pNext;
}

///GetPuntero, regresa un puntero.
void * Node::GetPuntero() {
    return this->puntero;
}

///SetData, declara un dato de tipo entero.
void Node::SetData(int _newData) {
    this->Data = _newData;
}

///SetNext, declara un dato de tipo nodo al siguente nodo.
void Node::SetNext(Node *_newNext) {
    this->pNext = _newNext;
}

///SetPuntero, declara un dato de tipo puntero.
void Node::SetPuntero(void *puntero) {
    this->puntero = puntero;
}

///Display, imprime el dato dentro de un nodo.
void Node::Display() {
    cout << "Data: " << GetData() << endl;
}

