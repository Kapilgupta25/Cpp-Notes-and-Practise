#include<iostream>
using namespace std;


//  (\0) ---> NULL CHARACHTER
//   (\) --> ESCAPE CHaracter

int main(){
    string s1;
    string s2="Hello!! ";
    cout<<"Enter the string:"; 
    getline(cin,s1);   // for reading whole string with spaces,tab
    cout<<s1<<endl;
    cout<<"Size:"<<s1.size()<<endl;
    string s3=s2+s1;           // joining tow or more strings
    cout<<"Concat:"<<s3<<endl;
    string s4= s3.append(s2);     // another formate for joining string
    cout<<s4<<endl;

    string str="Vansh is a \"good\" boy.";
    cout<<str;
}
