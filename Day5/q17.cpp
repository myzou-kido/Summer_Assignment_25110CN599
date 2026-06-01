#include <iostream>
using namespace std;

int main(){

    int num,flag=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    for(int i=1;i*i<=num;i++){

        if(i*i==num){
            flag=1;
     
        }else{
            flag=0;
        }

    }

    if(flag){
        cout<<num<<" is the perfect square"<<endl; 
    }else{
        cout<<num<<" is not the perfect square"<<endl; 
    }

    return 0;

}