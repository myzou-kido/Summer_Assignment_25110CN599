#include<iostream>
using namespace std;

int main(){

    int num=5;
    
     for(int i=1;i<=num;i++){

        for(int j=num-1;j>=i;j--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }

        for(int j=i-1;j>0;j--){
            cout<<char(64+j);
        }

        cout<<endl;

    }

    return 0;

}