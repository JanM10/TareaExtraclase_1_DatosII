#include <cstdlib>
#include "List.h"
#include "Node.h"
#include "Collector.h"
#include <iostream>
using namespace std;

List* list = new List();
Collector* lista = new Collector();

int main() {

    list->Insertar(1);
    list->Insertar(2);
    list->Insertar(3);
    list->Insertar(4);
//    list->Insertar(5);
    list->Print();
    cout << "_____________________________________" << endl;

    list->EliminarDato(1);
    list->EliminarDato(2);
    list->EliminarDato(3);
    list->Print();
    cout << "_____________________________________" << endl;

    list->Insertar(8);
    list->Insertar(9);
    list->Insertar(10);
    list->Print();
    cout << "_____________________________________" << endl;


}


