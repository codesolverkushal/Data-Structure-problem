#include<bits/stdc++.h>
#include"trienodeClass.h"
using namespace std;


class Trie{
    TrieNode* root;

    public:
    Trie(){
        root = new TrieNode('\0');
    }
    private:

    void insertWord(TrieNode* root, string word){
        //Base case..
      if(word.size()==0){
          root-> isTerminal = true;
          return;
      }

      // Small calculations 

      int index = word[0] - 'a';
      TrieNode *child;
      if(root->children[index]!=NULL){
           child = root->children[index];
      }
      else{
        child = new TrieNode(word[0]);
        root->children[index] = child;
      }

      //Recursive call 

      insertWord(child, word.substr(1));
    }
    public:

    void insertWord(string word){
        insertWord(root, word);
    }

    private:
      bool searchTrinode(TrieNode* root, string word){
          if(word.length()==0 && root->isTerminal == true){
            return true;
          }
          int index = word[0] - 'a';
          TrieNode* child;
          if(root->children[index]!=NULL){
            child = root->children[index];
          }
          else{
            return false;
          }

          return searchTrinode(root,word);
      }

    public: 
      bool search(string word){
        return searchTrinode(root,word);
      }

       private:
     void removeNode(TrieNode* root, string word){
          if(word.length() == 0){
            root->isTerminal = false;
            return;
          }

          int index = word[0] - 'a';
          TrieNode* child;
          if(root->children[index]!=NULL){
            child = root->children[index];
          }
          else{
            return;
          }

          removeNode(child,word);

          if(child->isTerminal==false){
            for (int i = 0; i <26; i++)
            {
                if(child->children[i]!=NULL){
                    return;
                }
            }
            delete child;
            root->children[index] = NULL;
            
          }
      }

    public: 
     void remove(string word){
        removeNode
        (root,word);
      }
};