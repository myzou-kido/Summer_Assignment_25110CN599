#include <iostream>
using namespace std;

int main(){

    int num,rem,ref=1,sum=0,test;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    test=num;
    num=abs(num);

    while(num>0){

        rem=num%10;
        sum+=rem*ref;
        ref*=2;
        num/=10;

    }

    if(test<0){
        cout<<"binary number is "<<sum*(-1)<<endl;
    }else{
        cout<<"binary number is "<<sum<<endl;
    }

    return 0;

}
