//
// Created by jmars on 09-Mar-21.
//
#include <iostream>
#include <cstdlib>
#include "Collector.h"

using namespace std;

///Contructor de la clase Collector.
///Inicializa los datos de la clase Collector.
Collector::Collector() {
    m_pTail = m_pHead = nullptr;
    m_Size = 0;
    puntero = nullptr;
}

///Funcion Instertar, agrega un puntero al Collector.
///Esta funcion recibe los punteros de la sobrecarga de delete y los almacena en una lista enlazada.
bool Collector::Insertar(void* data) {
//    cout << "Dato que ingresa al collector " << data << endl;
    Node* temp = (Node*)data; //AQUI HAY UN ERROR
    m_Size++;
//    cout << "SUMANDO SIZE = " << m_Size << endl;

    if(m_pHead == nullptr){
        m_pHead = temp;
        m_pTail = temp;

        return true;
    } else{
        m_pTail->SetNext(temp);
        m_pTail = m_pTail->GetNext();
        return true;
    }
    return false;
}

///RevisarCollector verifica si la lista de collector esta vacia o no.
///Esta funcion es de tipo booleano ya que solo revisa si la funcion esta vacia o no.
bool Collector::RevisarCollector() {
    if(m_Size == 0){
        return false;
    }else{
        return true;
    }
}

///PrintCollector imprime los datos dentro de la lista collector.
///Si la lista posee datos adentro los imprime, en caso de que no hayan imprime que esta vacia.
int Collector::PrintCollector() {
    if (m_pHead != nullptr){
        for (Node* temp = m_pHead; temp != nullptr; temp = temp->GetNext()){
            cout << "||PUNTERO DENTRO DEL COLECTOR||: " << temp << endl;
        }
    } else{
        cout << "||EL COLLECTOR ESTA VACIO||" << endl;
        return 0;
    }

}

///GetPuntero devuelve un puntero.
///Esta funcion se llama cuando se desea reutilizar uno de los punteros dentro de Collector.
void * Collector::GetPuntero() {
    Node* temp = m_pHead;
    m_pHead = temp->GetNext();
    return temp;
}

///BorrarDirColector boora un puntero dentro de Collector.
///Cuando se reutiliza uno de los punteros dentro de Collector esta funcion lo elimina de la lista.
bool Collector::BorrarDirColector(void *data) {
    if(m_pHead != nullptr){
        Node* temp = m_pHead;
        Node* previous = m_pHead;
        if(m_pHead == data){
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
