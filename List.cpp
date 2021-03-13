//
// Created by jmars on 06-Mar-21.
//
#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;

///Contructor de la clase List.
///Inicializa los datos de la clase List.
List::List() {
    m_pTail = m_pHead = nullptr;
    m_Size = 0;
}

///Funcion Instertar, agrega un puntero a List.
///Esta funcion recibe un entero y crea lo agrega a la lista enlazada.
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

///EliminarDato boora un dato dentro de List.
///Cuando se utiliza esta funcion, esta borra el dato deseado.
bool List::EliminarDato(int data) {
    if(m_pHead != nullptr){
        Node* temp = m_pHead;
        Node* previous = m_pHead;
        if(m_pHead->GetData() == data){
            m_pHead = m_pHead->GetNext();
            delete temp; //Se borra temp el cual es el inicio de la lista
        } else{
            temp = temp->GetNext();
            while (temp->GetData() != data){
                previous = temp;
                temp = temp->GetNext();
            }
            previous->SetNext(temp->GetNext());
            delete temp;

            return true;
        }
        return false;
    }
}

///Print imprime los datos dentro de la lista List.
///Imprime todos los datos mas su puntero que ingresen en la lista.
void List::Print() {
    if (m_pHead != nullptr){
        for (Node* temp = m_pHead; temp != nullptr; temp = temp->GetNext()){
            cout << "Node Data: " << temp->GetData() << " Puntero: " << temp << endl;
        }
    }
}



