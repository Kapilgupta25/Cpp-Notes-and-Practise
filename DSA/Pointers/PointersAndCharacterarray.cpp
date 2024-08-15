#include<iostream>
using namespace std;


int main(){
    char arr[5]="1234";

    char *ptr=arr;
    // print the value in the character array
    cout<<"Value: "<<arr<<endl;
    cout<<"Value: "<<ptr<<endl;

    // print address of the character array  
    // we use type casting to change the data_type from char to void for accessing the address of the character array
    cout<<"Address of character array:"<<(void*)arr<<endl;
    cout<<"Address of character array:"<<(void*)ptr<<endl;
    // Alternative of (void*) 
    cout<<"Address of character array using static_cast:"<<static_cast<void*>(ptr)<<endl;

    char name='k';
    char *ptr1=&name;
    cout<<"Name: "<<ptr1<<endl;      // this will print "k" but with some random value until the NULL character is found
    cout<<"Address of name: "<<(void*)ptr1<<endl;
    return 0;
}