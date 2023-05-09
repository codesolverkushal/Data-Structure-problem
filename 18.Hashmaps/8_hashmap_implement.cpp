#include<bits/stdc++.h>
using namespace std;

template<typename V>
class manode{
  public:
   string key;
   V value;
   manode* next;

   manode(string key, V value){
    this->key = key;
    this->value = value;
    next = NULL;
   }
   ~manode(){
    delete next;
   }
};

template<typename V>
class ourmap{
    public:
   manode<V>** buckets;
   int count;
  
   ourmap(){
    count = 0;
    
    buckets = new manode<V>*[10];
    for(int i = 0;i<10;i++){
        buckets[i] = NULL;
    }
   }
   ~ourmap(){
    for (int i = 0; i < 10; i++)
    {
        delete buckets[i];
    }
    delete [] buckets;
    
   }

   int size(){
    return count;
   }
   
   V getValue(string key){
       int bucketIndex = getBucketIndex(key);
       manode<V>* head = buckets[bucketIndex];

       while (head!=NULL)
       {
            if(head->key==key){
                return head->value;
            }
            head = head->next;
       }
       return 0;
       
   }

   private:
    int getBucketIndex(string key){
       int hashCode = 0;

       int currentCoeff = 1; 
       for (int i = key.length()-1; i >=0; i++)
       {
            hashCode += key[i] * currentCoeff;
            hashCode = hashCode% 10;
            currentCoeff *= 37;
            currentCoeff = currentCoeff % 10;
       }
       
       return hashCode % 10;
    }
  public:
   void insert(string key, V value){
          int bucketIndex = getBucketIndex(key);
          manode<V>* head = buckets[bucketIndex];
          while (head!=NULL)
          {
            if(head->key == key){
                head->value = value;
                return;
            }
            head = head->next;
          }
          head = buckets[bucketIndex];
          manode<V>* node = new manode<V>(key,value);
          node->next = head;
          buckets[bucketIndex] = node;
          count++;
          
   }

   V remove(string key){
      int bucketIndex = getBucketIndex(key);
      manode<V>* head = buckets[bucketIndex];
      manode<V>* prev = NULL;
      while (head!=NULL)
      {
         if(head->key = key){
            if(prev == NULL){
                  buckets[bucketIndex] = head->next;
            }
            else{
                prev->next = head->next;
            }
            V value = head->next;
            head->next = NULL;
            delete head;
            count--;
            return value;
         }
         prev = head;
         head = head->next;
      }
      return 0;
   }
};