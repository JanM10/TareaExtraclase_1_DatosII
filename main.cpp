#include <cstdlib>
#include "List.h"
#include "Node.h"
#include "Collector.h"
#include <iostream>
using namespace std;

List* list = new List();
Collector* colector = new Collector();

int main() {

    list->Insertar(1);
    list->Insertar(2);
    list->Insertar(3);
    list->Insertar(4);
    list->Insertar(5);
    list->Print();
    cout << "_____________________________________" << endl;

    colector->PrintCollector();
    cout << "_____________________________________" << endl;

    list->Insertar(10);
    list->Insertar(276);
    list->Print();
    cout << "_____________________________________" << endl;
}


