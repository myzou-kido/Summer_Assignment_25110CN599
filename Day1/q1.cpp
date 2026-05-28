#include<iostream>
using namespace std;

int main(){

    int num,sum=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    if(num<0){
        cout<<"please enter a number more then or equal to 0"<<endl;
    }else{

        for(int i=1;i<=num;i++){
            sum+=i;
        }

        cout<<"sum of N number is : "<<sum<<endl;
    }
    
    return 0;

}