#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;

    public:
    // default constructor
    Customer(){
        name="vansh";
        account_number=05;
        balance=1000;
    }

//  // Parametrized Constructor
    // Customer(string a, int b, int c){
    //     name=a;
    //     account_number=b;
    //     balance=c;
    // }

// Constructor Overlaoding - if function name is same but takes different number of argument then this is called constructor overloading
    Customer(string name, int account_number){
        this->name=name;
        this->account_number=account_number;
    }


// this is a pointer that store the address of the object that is created
    Customer(string name, int account_number, int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }

// Inline Constructor
    inline Constructor(string a, int b, int c): name(a), account_number(b), balance(c){
        
    } 


    void display(){
        cout<<name<< " "<< account_number<< " "<< balance <<endl;
    }

};

int main(){
    Customer A1;
    Customer A2("Kapil", 25, 10);
    Customer A3("Anmol", 100);
    A1.display();
    A2.display();
    A3.display();
}