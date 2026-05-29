#include<iostream>
using namespace std;

int main(){

    int num,rem,sum=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    if(num>=0){
    
        while(num>0){
            rem=num%10;
            sum=rem+sum*10;
            num/=10;
        }

        cout<<"reversed number is : "<<sum<<endl;
        
    }else{

        while(num<0){
            rem=num%10;
            sum=rem+sum*10;
            num/=10;
        }

        cout<<"reversed number is : "<<sum<<endl;

    }

    return 0;

}