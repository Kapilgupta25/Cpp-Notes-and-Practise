#include<iostream>
using namespace std;

int Steps(int a, int b){
    int total=0;
    total += min(8-a,8-b) + min(8-a,b-1) + min(a-1,8-b) + min(a-1,b-1);
    return total;
}

int main(){
    int a,b;
    cout<<"Enter row position:";
    cin>>a;
    cout<<"Enter column position:";
    cin>>b;
    cout<<"Total number of steps bishop can take from initial position are "<<Steps(a,b);
}
