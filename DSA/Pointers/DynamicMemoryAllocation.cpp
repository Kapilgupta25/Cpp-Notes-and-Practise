#include<iostream>
using namespace std;

// in HEAP there is no concept of automatic garbage collector we have to delete the memory from our side by using "delete" keyword

// // ---------- 1-D array MEMORY ALLOCATION ----------
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;

//     // this array store in HEAP MEMORY and is dynamic while it's pointer is store in STACK MEMORY and is static
//     int *ptr = new int [n];

//     // taking input
//     for(int i=0;i<n;i++){
//         ptr[i]=i+1;
//     }

//     // printing value of array
//     for(int i=0;i<n;i++){
//         cout<<ptr[i]<<" ";
//     }

//     // Removal of memory from HEAP
//     delete [] ptr;        // ptr jisko point kr raha hai usko delete krdo

//     return 0;
// }


// // // ---------- 2-D array MEMORY ALLOCATION ----------

// // creating 2-D array in HEAP MEMORY
// int main(){
//     int n,m;
//     cout<<"Enter the number of Rows:";
//     cin>>n;
//     cout<<"Enter the number of Columns:";
//     cin>>m;

// // use of double pointer to store the address of Each Row and it create the "n" rows that store the address of each 1-D array
//     int **ptr = new int *[n];
//     for(int i=0;i<n;i++){
//         // to create the 1-D array correspond to each Row of "m" column
//         ptr[i] = new int [m];
//     }

//     // taking input
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<"Enter the "<<i<<j<<"th Element: ";
//             cin>>ptr[i][j];
//         }
//     }

//     // printing value of array
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<ptr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     // Removal of memory from HEAP
//     for(int i=0;i<n;i++){
//         delete [] ptr[i];      // to delete the each row of 1-D array
//     }
//     delete [] ptr;         // to delete the array that store the address the of each row

//     return 0;
// }



// // ---------- 3-D array MEMORY ALLOCATION ----------

// creating 3-D array in HEAP MEMORY
int main(){
    int l,b,h;
    cout<<"Enter the Length:";
    cin>>l;
    cout<<"Enter the breadth:";
    cin>>b;
    cout<<"Enter the Height:";
    cin>>h;

// using triple pointer to store the address of 2-D array
    int ***ptr = new int **[l];
    // use of double pointer to store the address of Each Row and it create the "n" rows that store the address of each 1-D array
    for(int i=0;i<l;i++){
        ptr[i] = new int *[b];
        for(int j=0;j<b;j++){
        // to create the 1-D array correspond to each Row of "m" column
            ptr[i][j] = new int [h];
    }
    }

    // taking input
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<h;k++){
                ptr[i][j][k]=i+j+k;
            }
        }
    }

    // printing value of array
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<h;k++){
                cout<<ptr[i][j][k]<<" ";
            }
        }
    }


    return 0;
}
