# include <iostream> 
# include<math.h>
using namespace std ; 
void is_armstrong(int n){
   string s = to_string(n);
   int x = 0;
    for(int i=0 ; i<s.length() ; i++){
         x = x + powf(int(s[i])-48 , s.length());   
    }
   if(x==n){
    cout<<"True";
   }
   else{
    cout<<"False";
   }

}
int main() {
int n;
cout<<"Enter numner : ";
cin>>n;
is_armstrong(n);
return 0;
}