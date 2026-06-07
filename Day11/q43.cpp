#include <iostream>
using namespace std;

void isPrime(int num){

        int flag=1;

    if(num==1 || num==0 || num<0){

        flag=0;

    }else{

        for(int i=2;i*i<=num;i++){

            if(num%i==0){
                flag=0;
                break;
            }
        }
    }    

    if(flag){
        cout<<num<<" is prime";
    }else{
        cout<<num<<" is composite";
    }

}

int main(){

    int num;
    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    isPrime(num);

}