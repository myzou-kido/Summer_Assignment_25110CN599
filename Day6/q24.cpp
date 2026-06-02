#include <iostream>
using namespace std;

int main(){

    int num,pow,test,rep;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;
    cout<<"enter the power for the procedure"<<endl;
    cin>>pow;

    if(num==0 && pow==0){
        cout<<"undefined";
        return 0;
    }

    rep=num;
    test=pow;
    pow=abs(pow);

    if(pow==0){
        cout<<"the answer is "<<1<<endl;
        return 0;
    }else{

        for(int i=1;i<pow;i++){
            num*=rep;
        }

    }

    if(test<0){
        cout<<"the answer is "<<1/float(num)<<endl;
    }else{
        cout<<"the answer is "<<num<<endl;
    }

    return 0;

}