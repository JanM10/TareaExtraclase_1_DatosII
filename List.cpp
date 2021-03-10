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

bool List::Insertar(int data) {
    Node* temp = new Node(data, nullptr);

    if(m_pHead == nullptr){
        m_pHead = temp;
        m_pTail = temp;
        m_Size++;

        return true;
    } else{
        m_pTail->SetNext(temp);
        m_pTail = m_pTail->GetNext();
        m_Size++;
        return true;
    }
    return false;
}

void List::Print() {
    if (m_pHead != nullptr){
        for (Node* temp = m_pHead; temp != nullptr; temp = temp->GetNext()){
            cout << "Node Data: " << temp->GetData() << endl;
        }
    }
}



