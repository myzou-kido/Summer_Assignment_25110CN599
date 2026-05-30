#include<iostream>
using namespace std;

int main(){

    int num1,num2,ans;

    cout<<"enter 1st small number for the procedure"<<endl;
    cin>>num1;
    cout<<"enter 2nd large number for the procedure"<<endl;
    cin>>num2;

    for(int i=1;i<=num1;i++){
        if(num1%i==0 && num2%i==0){
            ans=i;
        }
    }

    ans=(num1*num2)/ans;

    cout<<"LCMS of given numbers is : "<<ans;

    return 0;

}