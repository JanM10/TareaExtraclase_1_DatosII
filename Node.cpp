//
// Created by jmars on 08-Mar-21.
//
#include <cstdlib>
#include <iostream>
#include "Node.h"

using namespace std;

Node::Node() {
    SetData(0);
    SetNext(nullptr);
//    this->Data = 0;
//    this->pNext = nullptr;
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

}