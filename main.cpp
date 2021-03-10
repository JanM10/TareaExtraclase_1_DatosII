#include <cstdlib>
#include "List.h"
#include "Node.h"
using namespace std;

List* list = new List();

int main() {

//    for (int i = 0; i < 10; i++){
//        list->Insertar(i);
//    }
    list->Insertar(1);
    list->Insertar(2);
    list->Insertar(3);
    list->Insertar(14);


    list->Print();

    if (list){
        delete list;
        list = nullptr;
    }
    return 0;
}
