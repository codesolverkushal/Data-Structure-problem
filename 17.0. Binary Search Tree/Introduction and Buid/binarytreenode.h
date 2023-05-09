#include<iostream>
using namespace std;

template<typename T>

class Bnode{
   public:
   T data;
   Bnode* left;
   Bnode* right;

   Bnode(T data){
    this->data = data;
    left = NULL;
    right = NULL;
   }

   ~Bnode(){
    delete left;
    delete right;
   }
};