#include<iostream>
using namespace std;

void armstronge(int num){

    int test,sum=0,digit=0;

    
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

}

int main(){

    int num,sum=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    armstronge(num);

    return 0;

}