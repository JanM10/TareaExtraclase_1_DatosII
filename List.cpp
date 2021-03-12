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
//~
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

//void List::RemoveFirst() {
//    if(m_pHead != nullptr){
//        Node* temp;
//        m_pHead = m_pHead->GetNext();
//        delete temp;
//        temp = nullptr;
//    }
//}
//
//void List::RemoveLast() {
//    if (m_pHead != nullptr){
//        Node* temp = m_pHead;
//
//        while (temp->GetNext() != m_pTail){
//            temp = temp->GetNext();
//        }
//        delete m_pTail;
//        m_pTail = temp;
//        m_pTail->SetNext(nullptr);
//    }
//}
//
//bool List::RemoveAt(int data) {
//    if (m_pHead != nullptr){
//        Node* temp = m_pHead;
//        Node* previous = m_pHead;
//
//        while (previous->GetNext()->GetData() != data){
////            cout << "previous: " << previous->GetData() << " data:" << data << endl;
//            previous = temp;
//            temp = temp->GetNext();
//        }
//        previous->SetNext(temp->GetNext());
//        delete temp;
//        temp = nullptr;
//
//        return true;
//    }
//    return false;
//}

bool List::EliminarDato(int data) {
    if(m_pHead != nullptr){
        Node* temp = m_pHead;
        Node* previous = m_pHead;
        if(m_pHead->GetData() == data){
            m_pHead = m_pHead->GetNext();
            cout << "TEMP ES: " << temp << endl;
            delete temp; //Se borra temp el cual es el inicio de la lista
        } else{
            temp = temp->GetNext();
            while (temp->GetData() != data){
//                cout << "previous: " << previous->GetData() << " data:" << data << endl;
                previous = temp;
                temp = temp->GetNext();
            }
            cout << "TEMP ES: " << temp << endl;
            previous->SetNext(temp->GetNext());
            delete temp;

            return true;
        }
        return false;
    }
}


void List::Print() {
    if (m_pHead != nullptr){
        for (Node* temp = m_pHead; temp != nullptr; temp = temp->GetNext()){
            cout << "Node Data: " << temp->GetData() << " Puntero: " << temp << endl;
        }
    }
}



