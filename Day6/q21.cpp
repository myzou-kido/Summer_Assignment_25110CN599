#include <iostream>
using namespace std;

int main(){

    int num,rem,ref=1,test;
    long long sum=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    test=num;
    num=abs(num);

    while(num>0){

        rem=num%2;
        sum+=rem*ref;
        ref*=10;
        num/=2;

    }

    if(test<0){
        cout<<"binary number is "<<sum*(-1)<<endl;
    }else{
        cout<<"binary number is "<<sum<<endl;
    }
    
    return 0;

}