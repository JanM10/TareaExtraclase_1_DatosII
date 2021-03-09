//
// Created by jmars on 08-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_NODE_H
#define TAREAEXTRACLASE_1_NODE_H

using namespace std;

class Node {
private:

    typedef struct node{
        int data;
        node* next;
    }* nodePtr;

    nodePtr head; //Inicio de la lista
    nodePtr curr; //Current(actual)
    nodePtr temp; //Temporal

public: //This is where the functions go
    Node();
    void AddNode(int addData);
    void DeleteNode(int delData);

    void * operator new(size_t size){
        cout<< "Overloading new operator with size: " << size << endl;
        void * p = ::new Node();
        //void * p = malloc(size); will also work fine
        return p;
    }

    void operator delete(void * p){
        cout<< "Overloading delete operator " << endl;
        free(p);
    }

};


#endif //TAREAEXTRACLASE_1_NODE_H
