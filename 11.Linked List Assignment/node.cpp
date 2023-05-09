#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data = data;
        next = NULL;
    }

// ~Node(){
//     int value = this->data;

//     // memory free

//     if(this->next !=NULL){
//         delete next;
//         this->next = NULL;

//     }

//     cout<<"Memory is free for node with data"<<value <<endl;
// }
};
