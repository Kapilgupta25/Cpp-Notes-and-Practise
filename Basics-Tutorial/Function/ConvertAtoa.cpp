#include <iostream>
using namespace std;

char convert(char name){
    char res= name - 'a' + 'A';
    return res;
}

int main(){
    char name;
    cout<<"Enter the small character:";
    cin>> name;
    char ans = convert(name);
    cout<<"Capital Letter is: "<<ans<<endl;
    return 0;
}
