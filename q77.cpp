#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n,o,p;

    cout<<"enter the number of rows of 1st matrix : ";
    cin>>n;
    cout<<"enter the number of columns of 1st matrix : ";
    cin>>o;  
    cout<<"enter the number of columns of 2nd matrix : ";
    cin>>p;  

    int mat1[n][o];
    int mat2[o][p];
    int mat_Mul[n][p];

    cout<<"enter matrix 1"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            cin>>mat1[i][j];
        }
    }

    cout<<"enter matrix 2"<<endl;

    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cin>>mat2[i][j];
        }
    }

    cout<<"multiplying both matrix "<<endl;


    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            int sum=0;
            for(int k=0;k<o;k++){
                sum+=mat1[i][k]*mat2[k][j];
            }
            mat_Mul[i][j]=sum;
            cout<<mat_Mul[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}