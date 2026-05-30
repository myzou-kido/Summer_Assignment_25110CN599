#include<iostream>
using namespace std;

int main(){

    int num,flag=1;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

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

    return 0;

}