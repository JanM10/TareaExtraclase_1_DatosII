//
// Created by jmars on 09-Mar-21.
//
#include <iostream>
#include <cstdlib>
#include "Collector.h"


using namespace std;

Collector::Collector() {
    m_pTail = m_pHead = nullptr;
    m_Size = 0;
}

bool Collector::Insertar(int data) {
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

void Collector::Print() {
    if (m_pHead != nullptr){
        for (Node* temp = m_pHead; temp != nullptr; temp = temp->GetNext()){
            cout << "Node Data: " << temp->GetData() << endl;
        }
    }
}