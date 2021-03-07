//
// Created by jmars on 06-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_LIST_H
#define TAREAEXTRACLASE_1_LIST_H


class List {
private:

    typedef struct node{
        int data;
        node* next;
    }* nodePtr;

    nodePtr head; //Inicio de la lista
    nodePtr curr; //Current(actual)
    nodePtr temp; //Temporal

public: //This is where the functions go
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PintList();

};


#endif //TAREAEXTRACLASE_1_LIST_H
