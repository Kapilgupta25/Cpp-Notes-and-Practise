#include<iostream>
using namespace std;


// // --------- 1. Increase the value -----------
// void incre(int *ptr){
//     *ptr=*ptr+1;
// }

// int main(){
//     int num=10;

//     cout<<"Original value: "<<num<<endl;
//     incre(&num);
//     cout<<"Increased value: "<<num<<endl;
//     return 0;
// }


// // ---------- 2. Double the value of array -------------

// void doub(int *p){            // ( *p==p[] both are equal)  i.e,   *arr == arr[]
//     for(int i=0;i<5;i++){
//         p[i]=p[i]*2;
//     }
// }

// int main(){
//     int arr[5]={1,2,3,4,5};

//     doub(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }


// // ------------ 3. Swap two numbers ----------

// void swapped(int *ptr1,int *ptr2){
//     int temp=*ptr1;
//     *ptr1=*ptr2;
//     *ptr2=temp;

//     //Printing the address of "n" and "m"
//     cout<<"Address of n:"<<ptr1<<endl;
//     cout<<"Address of m:"<<ptr2<<endl;
//     // printing tha address of pointers
//     cout<<"Address of pointer ptr1:"<<&ptr1<<endl;
//     cout<<"Address of pointer ptr2:"<<ptr2<<endl;
// }

// int main(){
//     int n=10,m=20;

//     cout<<"original: First number- "<<n<<"  Second Number- "<<m<<endl;
//     swapped(&n,&m);
//     cout<<"Swapped: First number- "<<n<<"  Second Number- "<<m<<endl;
//     return 0;
// }

// // ---------- REFERENCE VARIABLE  -----------

// // // reference variable mtlb hm ek address ke do naam de rahe hai ya do se jayda bhi de sakte hai declare using ( &new_Variable_name = old_variable_name) 
// int main(){
//     int num=25;

//     int &temp=num;
//     temp++;
//     cout<<"Updated value using reference variable:"<<num<<endl;
// }

    // // ---------------- Swapping using reference variable ----------

    void swapping(int &p1,int &p2){         // creating reference variable
        int temp=p1;
        p1=p2;
        p2=temp;
    }

    int main(){
        int first=10,second=20;

        cout<<"original: First number- "<<first<<"  Second Number- "<<second<<endl;
        swapping(first,second);
        cout<<"Swapped: First number- "<<first<<"  Second Number- "<<second<<endl;
        return 0;
    }   