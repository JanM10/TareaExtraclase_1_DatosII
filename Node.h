//
// Created by jmars on 08-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_NODE_H
#define TAREAEXTRACLASE_1_NODE_H


using namespace std;

class Node {

public:
    Node(); //Constructor
    void * operator new(size_t _data, Node* _next);
    Node(int _data, Node* _next); //Overload of our constructor
    Node(void* puntero, Node* _next);

    int GetData(); //Access the member data outside of this class
    Node* GetNext(); //Same as GetData
    void* GetPuntero();

     void SetData(int _newData);
     void SetData(void* _newPtr);
     void SetNext(Node* _newNext);
     void SetPuntero(void *puntero);

    void Display(); //Displays contents of the data within this class

    void * operator new(size_t _newData);

    void operator delete(void * _newNext); //ORIGIANL REGRESAR A ESTE POR SI ACASO

private:
    int Data; //Stores int type data
    Node* pNext; //This is a pointer to our next node in our list
    void *puntero;

};


#endif //TAREAEXTRACLASE_1_NODE_H
