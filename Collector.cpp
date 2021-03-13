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
    puntero = nullptr;
}

bool Collector::Insertar(void* data) {
//    cout << "Dato que ingresa al collector " << data << endl;
    Node* temp = (Node*)data; //AQUI HAY UN ERROR
    m_Size++;
    cout << "SUMANDO SIZE = " << m_Size << endl;
//    SetPuntero(data);

    if(m_pHead == nullptr){
        m_pHead = temp;
        m_pTail = temp;
//        m_Size++;

        return true;
    } else{
        m_pTail->SetNext(temp);
        m_pTail = m_pTail->GetNext();
//        m_Size++;
        return true;
    }
    return false;
}

bool Collector::RevisarCollector() {
    if(m_Size == 0){
        return false;
    }else{
        cout << "INICIO DE COLECTOR: " << m_pHead->GetPuntero() << endl;
        return true;
    }
}

int Collector::PrintCollector() {
    if (m_pHead != nullptr){
        for (Node* temp = m_pHead; temp != nullptr; temp = temp->GetNext()){
            cout << "PUNTEROS DENTRO DE Collector: " << temp << endl; //NO SE ESTA IMPRIMIENDO
        }
    } else{
        cout << "||EL COLLECTOR ESTA VACIO||" << endl;
        return 0;
    }

}

void * Collector::GetPuntero() {
    Node* temp = m_pHead;
    cout << "HEAD: " << m_pHead << endl;
    m_pHead = temp->GetNext();
    return temp;
}

bool Collector::BorrarDirColector(void *data) {
    if(m_pHead != nullptr){
        Node* temp = m_pHead;
        Node* previous = m_pHead;
        if(m_pHead == data){ //REGRESAR EL ->GetData()
            m_pHead = m_pHead->GetNext();
        } else{
            temp = temp->GetNext();
            while (temp != data){ //REGRESAR EL ->GetData()
//                cout << "previous: " << previous->GetData() << " data:" << data << endl;
                previous = temp;
                temp = temp->GetNext();
            }
            cout << "TEMP ES: " << temp << endl;
            previous->SetNext(temp->GetNext());

            return true;
        }
        return false;
    }
}
