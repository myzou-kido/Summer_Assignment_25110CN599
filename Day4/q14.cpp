#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"enter your term for the fibonacci series : ";
    cin>>num;

    if(num==1){

        cout<<"term "<<1<<" : "<<0<<endl;

    }else if(num==2){

        cout<<"term "<<2<<" : "<<1<<endl;

    }else{

        long long term1,term2,nxtterm;

        term1=0;
        term2=1;

        for(int i=3;i<=num;i++){

            nxtterm=term1+term2;
            term1=term2;
            term2=nxtterm;

        }

        cout<<"term "<<num<<" : "<<nxtterm<<endl;

    }
    
    return 0;

}