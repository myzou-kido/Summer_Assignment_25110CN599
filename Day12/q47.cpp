#include<iostream>
using namespace std;

int fabonacci(int num){

    long long term1,term2,nxtterm;

    term1=0;
    term2=1;

    for(int i=3;i<=num;i++){

        nxtterm=term1+term2;
        term1=term2;
        term2=nxtterm;

    }

    return nxtterm;

}

int main(){

    int num;

    cout<<"enter your term for the fibonacci serirs : ";
    cin>>num;

    cout<<"term is "<<fabonacci(num)<<endl;

    return 0;

}