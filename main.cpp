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

    list->Insertar(1);
    list->Insertar(2);
    list->Insertar(3);
    list->Insertar(4);
    list->Insertar(5);
    list->Insertar(6);
    list->Insertar(7);
    list->Print();
    cout << "_____________________________________" << endl;

    list->EliminarDato(7);
    lista->PrintCollector();
    list->Print();
    cout << "_____________________________________" << endl;

    list->Insertar(8);
    list->Print();
    cout << "_____________________________________" << endl;
//    list->Insertar(7);
//    list->Print();


//    list->Insertar(5);
//    list->Print();
//    lista->PrintCollector();
//    list->Print();

}


