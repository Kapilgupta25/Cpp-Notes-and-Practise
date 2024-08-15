#include<iostream>
using namespace std;

// Size of POINTER depends on the size of RAM i.e,  for (4GB RAM)--->(4bytes) and for (8GB or 16GB RAM)--->(8bytes)


int main(){
    int a;
    a=1000;
// To point the address of "a" we use "&"--->(mpercent)
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Value:"<<a<<endl;
// To store the ADDRESS we use syntax--->(data_type *pointer_name = &variabl_name) here data_type of variable name
    int *ptr = &a;
    cout<<"Value by using Pointer: "<<*ptr<<endl;
    cout<<"Address of a using pointer: "<<ptr<<endl;
// TO check the size of pointers
    cout<<"Size of pointer: "<<sizeof(ptr)<<endl;
    cout<<"Size of variable using pointer: "<<sizeof(*ptr)<<endl;
    return 0;
}