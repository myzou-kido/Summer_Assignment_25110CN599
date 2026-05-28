#include<iostream>
using namespace std;

int main(){

    int num,sum=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    if(num==0){
        cout<<"number of digit : "<<1<<endl;
    }else if(num>0){

        while(num>0){
            sum++;
            num/=10;
        }

        cout<<"number of digit : "<<sum<<endl;

    }else{

        while(num<0){
            sum++;
            num/=10;
        }

        cout<<"number of digit : "<<sum<<endl;

    }

    return 0;

}