#include <cstdlib>
#include "List.h"
#include "Node.h"
#include "Collector.h"
#include <iostream>
using namespace std;

int variable = 12;
int variable1 = 23;
int variable2= 865;
int *apuntador = &variable;

List* list = new List();
Collector* lista = new Collector();


int main() {

    list->Insertar(2);
    list->Insertar(4);
    list->Insertar(1);
    list->Print();
//    list->RemoveAt(4);
    list->RemoveAt(4);
    list->Print();

//    list->Insertar(5);
//    list->Print();
//    lista->PrintCollector();
//    list->Print();


//    list->Insertar(3);
//    list->Print();
//
//    list->RemoveAt(3);
//    list->Print();

//    lista->Insertar(1);
//    lista->Insertar(2);
//    lista->Insertar(3);
//    lista->Insertar(variable);
//    lista->Insertar(variable1);
//    lista->Insertar(variable2);
//    lista->Insertar(variable2);
//    lista->PrintCollector();
//    lista->RevisarCollector();
    return 0;
}

//void pedirDatos(){
//    cout << "Digite el tamaño que se desea: "; cin>> tamano;
//}

