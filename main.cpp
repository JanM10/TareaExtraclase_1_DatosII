#include <cstdlib>
#include "List.h"
using namespace std;

int main(int argc, char** argv) {

    List ListaPrueba;

    ListaPrueba.AddNode(3);
    ListaPrueba.AddNode(5);
    ListaPrueba.AddNode(7);
    ListaPrueba.PintList();

    ListaPrueba.DeleteNode(3);
    ListaPrueba.PintList();

    return 0;
}
