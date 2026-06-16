#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;

    cout<<"enter the size of matrix : ";
    cin>>n;

    int mat1[n][n];
    int mat2[n][n];

    cout<<"enter matrix"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }

    cout<<"transpose of matrix is"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat2[i][j]=mat1[j][i];
            cout<<mat2[i][j];
        }
        cout<<endl;
    }

    return 0;

}