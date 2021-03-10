//
// Created by jmars on 08-Mar-21.
//
#include <cstdlib>
#include <iostream>
#include "Node.h"
#include "Collector.h"

using namespace std;

Node::Node() {
    SetData(0);
    SetNext(nullptr);
//    this->Data = 0;
//    this->pNext = nullptr;
}
void * Node::operator new(size_t _newData) {
    cout<< "Overloading new operator with size: " << _newData << endl;
//    if (Collector().EstadoActual() != NULL){
//        void * puntero =
//    }
    void * puntero = ::new Node();
    //void * p = malloc(size); will also work fine
    return puntero;
}

void Node::operator delete(void* _newNext) {
    cout<< "Overloading delete operator " << endl;
    free(_newNext);
}

Node::Node(int _newData, Node *_pNewNext) { //Aqui es donde se hace el overload (Supongo que este el del New de sobrecarga)
    SetData(_newData);
    SetNext(_pNewNext);
//    this->Data = _data;
//    this->pNext = _pNewNext;
}

Node::~Node() {

}

int Node::GetData() {
    return this->Data;
}

Node* Node::GetNext() {
    return this->pNext;
}

void Node::SetData(int _newData) {
    this->Data = _newData;
}

void Node::SetNext(Node *_newNext) {
    this->pNext = _newNext;
}

void Node::Display() {
    cout << "Data: " << GetData() << endl;
}