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


Node::Node() {
    SetData(0);
    //this->pNext = nullptr;
    SetNext(pNext);
    SetPuntero(puntero);
    GetPuntero();
}
void * Node::operator new(size_t _newData) {
//    cout<< "Overloading new operator with size: " << _newData << endl;
    if (colecotor->RevisarCollector()){
        cout << "SE REUTILIZA UNA DIRECCION DE MEMORIA" << endl;
        void * puntero = colecotor->GetPuntero();
        return puntero;
    }else{
        void * puntero = :: new Node();
        return puntero;
    }
    //cout << "puntero: " << puntero << endl;
    //void * p = malloc(size); will also work fine
}

void Node::operator delete(void* _newNext) {
    cout<< "Overloading delete operator " << endl;
    colecotor->Insertar(_newNext); //Se esta pasando la direccion de memoria de newNext no la correcta
    colecotor->PrintCollector();
}

Node::Node(int _newData, Node *_pNewNext) {
    SetData(_newData);
    SetNext(_pNewNext);
}

Node::Node(void *puntero, Node *_next) {
    SetPuntero(puntero);
    SetNext(_next);
}

Node::~Node() {

}

//GETTERS
int Node::GetData() {
    return this->Data;
}

Node* Node::GetNext() {
    return this->pNext;
}

void * Node::GetPuntero() {
    return this->puntero;
}

//SETTERS
void Node::SetData(int _newData) {
    this->Data = _newData;
}

void Node::SetNext(Node *_newNext) {
    this->pNext = _newNext;
}

void Node::SetPuntero(void *puntero) {
    this->puntero = puntero;
}

//PRINT
void Node::Display() {
    cout << "Data: " << GetData() << endl;
}

