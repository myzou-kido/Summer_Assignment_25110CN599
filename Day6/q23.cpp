#include <iostream>
using namespace std;

int main(){

    int num,rem,ref=1,set=0;
    long long sum=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    num=abs(num);

    while(num>0){

        sum+=num%2;
        num/=2;

    }

    cout<<"set bits are "<<sum<<endl;

    return 0;

}