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

private:
    int Data; //Stores int type data
    Node* pNext; //This is a pointer to our next node in our list

};

//public: //This is where the functions go
//    Node();
//    void AddNode(int addData);
//    void DeleteNode(int delData);
//
//    void * operator new(size_t size){
//        cout<< "Overloading new operator with size: " << size << endl;
//        void * p = ::new Node();
//        //void * p = malloc(size); will also work fine
//        return p;
//    }
//
//    void operator delete(void * p){
//        cout<< "Overloading delete operator " << endl;
//        free(p);
//    }
//
//};


#endif //TAREAEXTRACLASE_1_NODE_H
