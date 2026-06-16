#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;

    cout<<"enter the size of matrix : ";
    cin>>n;

    int mat1[n][n];
    int sum=0;

    cout<<"enter matrix"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( i==j || j==n-i-1){
                sum+=mat1[i][j];
            }
        }
    }

    cout<<"sum of dignol is "<<sum<<endl;

    return 0;

}