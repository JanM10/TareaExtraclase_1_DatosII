//
// Created by jmars on 06-Mar-21.
//
#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;

List::List() {
    m_pTail = m_pHead = nullptr;
    m_Size = 0;
}

List::~List() { //Destructor
    //Check if we have any data in our list
    if(m_pHead != nullptr){
        Node* current = m_pHead;

        while (current != nullptr){
            Node* next = current->GetNext();
            delete current;
            current = next;
        }

        m_pHead = m_pTail = nullptr;
    }
}



