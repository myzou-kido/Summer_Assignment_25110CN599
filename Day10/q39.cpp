#include<iostream>
using namespace std;

int main(){

    int num=5;
    
     for(int i=1;i<=num;i++){

        for(int j=num-1;j>=i;j--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=i-1;j>0;j--){
            cout<<j;
        }

        cout<<endl;

    }

    return 0;

}