#include<iostream>
using namespace std;

int main(){

    int num,pro=1;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;
    num=abs(num);

    if(num==0){

        cout<<"product of number is : "<<0<<endl;

    }else{

        while(num>0){
            pro*=num%10;
            num/=10;
        }

        cout<<"product of number is : "<<pro<<endl;

    }

    return 0;

}
