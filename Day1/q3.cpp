#include<iostream>
using namespace std;

int main(){

    int num,fact=1;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    if(num==0){

        cout<<"factorial is : "<<1<<endl;

    }else if(num>0){

        for(int i=2;i<=num;i++){
            fact*=i;
        }

        cout<<"factorial is : "<<fact<<endl;

    }else{
        cout<<"factorial of negative number can not be calculated"<<endl;
    }

    return 0;   

}