#include <cstdlib>
#include "List.h"
#include "Node.h"
#include <iostream>
using namespace std;

int *n;
int variable = 12;
int *apuntador = &variable;

List* list = new List();

int main() {

//    list->Insertar(2);
//    list->Insertar(1);
//    list->Insertar(1);
//    list->Insertar(3);
//    list->Insertar(12121212);
//
//    list->Print();

    cout << variable << endl;
    cout << apuntador << endl;
    variable = NULL;
    cout << variable << endl;
    cout << apuntador << endl;


    if (list){
        delete list;
        list = nullptr;
    }
    return 0;
}

//void pedirDatos(){
//    cout << "Digite el tamaño que se desea: "; cin>> tamano;
//}

