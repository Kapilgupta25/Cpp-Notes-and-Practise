#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string roman(int n){
    if(n==1) return "I";
    else if(n==0) return "";
    else if(n==2) return "II";
    else if(n==3) return "III";
    else if(n==4) return "IV";
    else if(n==5) return "V";
    else if(n==6) return "VI";
    else if(n==7) return "VII";
    else if(n==8) return "VIII";
    else if(n==9) return "IX";
    else if(n==10) return "X";
    else if(n==20) return "XX";
    else if(n==30) return "XXX";
    else if(n==40) return "XL"; 
    else if(n==50) return "L";
    else if(n==60) return "LX";
    else if(n==70) return "LXX";
    else if(n==80) return "LXXX";
    else if(n==90) return "XC";
    else if(n==100) return "C";
    else if(n==200) return "CC";
    else if(n==300) return "CCC";
    else if(n==400) return "CD";
    else if(n==500) return "D";
    else if(n==600) return "DC";
    else if(n==700) return "DCC";
    else if(n==800) return "DCCC";
    else if(n==900) return "CM";
    else if(n==1000) return "M";
    else if(n==2000) return "MM";
    else  return "MMM";
}

string IntToRoman(int num){
    int count=0;
    int temp=num;
    while(temp>0){
        count++;
        temp/=10;
    }
    int mul=1,rem=0,c;
    vector<string>ans(count);
    while(num>0){
        rem=num%10;
        c=rem*mul;
        ans.push_back(roman(c));
        mul=mul*10;
        num/=10;
    }
    reverse(ans.begin(),ans.end());
    string finalans;
    for(int i=0;i<ans.size();i++){
        finalans+=ans[i];
    }
    return finalans;
}

int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;

    string ans=IntToRoman(n);
    cout<<"Roman value of "<<n<<":"<<ans<<endl;
    return 0;
}
