#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;

    cout<<"enter the size of matrix : ";
    cin>>n;

    int mat1[n][n];
    int mat2[n][n];
    int mat_Add[n][n];

    cout<<"enter matrix 1"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }

    cout<<"enter matrix 2"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat2[i][j];
        }
    }

    cout<<"additing both matrix "<<endl;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat_Add[i][j]=mat1[i][j]+mat2[i][j];
            cout<<mat_Add[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}