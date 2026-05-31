#include<iostream>
using namespace std;

int main(){

    int num;
    long long term1,term2,nxtterm;

    cout<<"enter your term for the fibonacci serirs : ";
    cin>>num;
    term1=0;
    term2=1;

    cout<<"term "<<1<<" : "<<term1<<endl;
    cout<<"term "<<2<<" : "<<term2<<endl;

    for(int i=3;i<=num;i++){

        nxtterm=term1+term2;
        term1=term2;
        term2=nxtterm;
        cout<<"term "<<i<<" : "<<nxtterm<<endl;

    }

    return 0;

}
