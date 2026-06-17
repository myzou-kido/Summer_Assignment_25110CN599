#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;

    cout<<"enter the size of matrix : ";
    cin>>n;

    int mat1[n][n];
    int mat2[n][n];
    bool flag=true;

    cout<<"enter matrix"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat2[i][j]=-mat1[j][i];
            if(mat2[i][j]!=mat1[i][j]){
                flag=false;
            }
        }
    }

    if(flag){
        cout<<"matrix is symetric"<<endl;
    }else{
        cout<<"matrix is not symetric"<<endl;
    }

    return 0;

}