#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;

}