#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i]  = NULL;
        }
        isTerminal = false;
        
    }
};

class Trie{
    public:
     TrieNode* root;

      Trie(){
        root = new TrieNode('\0');
    }
    
    private:
    void inserttri(TrieNode* root, string word){
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }


        int index =  word[0] - 'a';
        TrieNode* child;
        if(root->children[index]!=NULL){

            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;

        }

        inserttri(child,word.substr(1));
    }
    public:
    void insert(string word){
        inserttri(root,word);
    }

    private:
    bool searchtri(TrieNode* root, string word){
        if(word.length() == 0 && root->isTerminal== true){
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
       return searchtri(child, word.substr(1));
    }
    public:
    bool search(string word){
        return searchtri(root, word);
    }

    private:
    void removetri(TrieNode* root, string word){
         if(word.length()==0){
            root->isTerminal = false;
            return;
         }

         int index = word[0] -'a';
         TrieNode* child;

         if(root->children[index]!=NULL){
            child = root->children[index];        
         }
         else{
            return;
         }

         removetri(child,word.substr(1));
        
    }


    public:
    void remove(string word){
         removetri(root,word);
    }

};

int main(){
    
    Trie* t = new Trie();
    t->insert("abcd");
    t->insert("abce");


    cout<<"Present or Not :: "<<t->search("abcd")<<endl;
    t->remove("abcd");
    cout<<"Present or Not :: "<<t->search("abcd")<<endl;
    cout<<"Present or Not :: "<<t->search("abce")<<endl;
    t->remove("abce");
    cout<<"Present or Not :: "<<t->search("abce")<<endl;
return 0;
}