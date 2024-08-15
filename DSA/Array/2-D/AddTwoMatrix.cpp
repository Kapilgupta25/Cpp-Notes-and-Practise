#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the size of the matrix:";
    cin>>n;

    cout<<"\nEnter the Value for first matrix:"<<endl;
    int arr[n][n];
    for (int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>arr[i][j];
        }
    }

    cout<<"\nEnter the Value for second matrix:"<<endl;
    int str[n][n];
    for (int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the "<<i<<j<<"th Element:";
            cin>>str[i][j];
        }
    }


    int sum[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=arr[i][j]+str[i][j];
        }
    }

    cout<<"Matrix after addition :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    return 0;
}
