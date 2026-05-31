#include<iostream>
using namespace std;

int main(){

    int num,test,sum=0,digit=0;

    cout<<"enter your number for the procedure : ";
    cin>>num;

    test=num;

    while(test>0){

        digit++;
        test/=10;

    }

    test=num;

    while(test>0){

        int multiplier=1;
        int rem;
        rem=test%10;
        
        for(int i=0;i<digit;i++){

            multiplier*=rem;

        }

        sum+=multiplier;
        test/=10;

    }

    if(sum==num){
        cout<<num<<" is an armstrong number"<<endl;
    }else{
        cout<<num<<" is not an armstrong number"<<endl;
    }

    return 0;

}