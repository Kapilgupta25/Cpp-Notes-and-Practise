#include<bits/stdc++.h>
using namespace std;

class TrieNode{
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        // In the starting all the children are NULL and Terminal is false
        for(int i=0; i<26; i++){
            children[i]= NULL;
        }
        isTerminal = false;
    }
};

class Trie{
public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        // base case 
        if(word.length()==0){
            root->isTerminal = true;
            return;
        }

        // assuming that only Caplital letters are there in the string
        int index=word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        // absent
        else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word){
        // base condition
        if(word.length()==0){
            return root->isTerminal==true;
        }

        int index=word[0]-'A';
        TrieNode* child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    void removeUtil(TrieNode* root, string word){
        // base condition
        if(word.length()==0){
            root->isTerminal=false;
            return; 
        }

        int index=word[0]-'A';

        if(root->children[index]!=NULL){
            removeUtil(root->children[index], word.substr(1));
        }
        else{
            return;
        }
    }

    void removeWord(string word){
        removeUtil(root, word);
    }
};

int main(){
    Trie* t=new Trie();
    t->insertWord("KAPIL");
    t->insertWord("ANMOL");
    t->insertWord("SAKET");

    cout<<"present or not: "<<t->searchWord("SAKET")<<endl;
    cout<<"present or not: "<<t->searchWord("SAK")<<endl;
    cout<<"present or not: "<<t->searchWord("KAPIL")<<endl;

    t->removeWord("KAPIL");

    cout<<"present or not: "<<t->searchWord("KAPIL")<<endl;  

    return 0;
}