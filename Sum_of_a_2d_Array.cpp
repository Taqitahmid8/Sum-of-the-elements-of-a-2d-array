#include<iostream>
using namespace std ;

int main(){

    int nor ,noc;
    cout<<"Enter the number of row : ";
    cin>>nor;

    cout<<"Enter the number of column : ";
    cin>>noc;

    int arr[nor][noc];
   cout<<"Enter the elements of the matrix : ";
     for(int i=0;i<nor;i++){
        for(int j=0; j<noc;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix"<<endl;
    cout<<"--------"<<endl;
    for(int i=0;i<nor;i++){
        for(int j=0;j<noc;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<nor;i++){
        for(int j=0;j<noc;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<"SUM : "<<sum;
}
