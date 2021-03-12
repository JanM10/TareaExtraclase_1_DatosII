//
// Created by jmars on 09-Mar-21.
//
#include <iostream>
#include <cstdlib>
#include "Collector.h"
#include "Node.h"


using namespace std;

Collector::Collector() {
    m_pTail = m_pHead = nullptr;
    m_Size = 0;
    puntero = nullptr;
}

bool Collector::Insertar(void* data) {
//    cout << "Dato que ingresa al collector " << data << endl;
    Node* temp = new Node(data, nullptr); //AQUI HAY UN ERROR

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

bool Collector::RevisarCollector() {
    if(m_pHead == nullptr){
        return false;
    }else{
        cout << "INICIO DE COLECTOR: " << m_pHead->GetPuntero() << endl;
        return true;
    }
}

int Collector::PrintCollector() {
    if (m_pHead != nullptr){
        for (Node* temp = m_pHead; temp != nullptr; temp = temp->GetNext()){
            cout << "Direccion de memoria en Collector: " << temp->GetPuntero() << endl; //NO SE ESTA IMPRIMIENDO
        }
    }
    return 0;
}

void Collector::SetPuntero(void *puntero) {
    this->puntero = puntero;
}

void * Collector::GetPuntero() {
    puntero = m_pHead;
    return this->puntero;
}

bool Collector::BorrarDirColector(void *data) {
    if(m_pHead != nullptr){
        Node* temp = m_pHead;
        Node* previous = m_pHead;
        if(m_pHead->GetPuntero() == data){ //REGRESAR EL ->GetData()
            m_pHead = m_pHead->GetNext();
            cout << "temp: " << temp << endl;
            delete temp; //Se borra temp el cual es el inicio de la lista
        } else{
            temp = temp->GetNext();
            while (temp->GetPuntero() != data){ //REGRESAR EL ->GetData()
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
