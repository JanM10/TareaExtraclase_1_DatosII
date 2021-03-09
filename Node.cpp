//
// Created by jmars on 08-Mar-21.
//
#include <cstdlib>
#include <iostream>
#include "Node.h"

using namespace std;

Node::Node() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void Node::AddNode(int addData) {
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if (head != NULL){
        curr = head;
        while (curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }
    else{
        head = n;
    }
}

void Node::DeleteNode(int delData) {
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while (curr != NULL && curr->data != delData){
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL){
        cout << delData << " no fue encontrado en la lista"<< endl;
        delete delPtr; //Esto se borra por ahora porque falta el collector
    }
    else{
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if (delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "El valor " << delData << " fue borrado" << endl;
    }
}