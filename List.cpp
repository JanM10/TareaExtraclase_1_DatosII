//
// Created by jmars on 06-Mar-21.
//
#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

List::List() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddNode(int addData) {
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

void List::DeleteNode(int delData) {
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
        delete delPtr;
        cout << "El valor " << delPtr << " fue borrado" << endl;
    }
}



