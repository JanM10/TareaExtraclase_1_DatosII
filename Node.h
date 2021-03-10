//
// Created by jmars on 08-Mar-21.
//

#ifndef TAREAEXTRACLASE_1_NODE_H
#define TAREAEXTRACLASE_1_NODE_H

using namespace std;

class Node {

public:
    Node(); //Constructor
    Node(int _data, Node* _next); //Overload of our constructor
    ~Node(); //Destructor (No se utiliza)

    int GetData(); //Access the member data outside of this class
    Node* GetNext(); //Same as GetData

    void SetData(int _newData);
    void SetNext(Node* _newNext);

    void Display(); //Displays contents of the data within this class

    void * operator new(size_t _newData);

    void operator delete(void * _newNext);

private:
    int Data; //Stores int type data
    Node* pNext; //This is a pointer to our next node in our list

};


#endif //TAREAEXTRACLASE_1_NODE_H
