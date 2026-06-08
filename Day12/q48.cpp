#include <iostream>
using namespace std;

void perfect(int num){

    int flag=0;

    for(int i=1;i*i<=num;i++){

        if(i*i==num){
            flag=1;
            break;
        }

    }

    if(flag){
        cout<<num<<" is the perfect square"<<endl; 
    }else{
        cout<<num<<" is not the perfect square"<<endl; 
    }

}

int main(){

    int num;
    cout<<"enter the number for the procedure"<<endl;
    cin>>num;

    perfect(num);

    return 0;

}