#include <iostream>
using namespace std;

int fab(int num){

    if(num==0){
        return 0;
    }else if(num==1){
        return 1;
    }else{
        return fab(num-1)+fab(num-2);
    }

}

int main(){

    int num;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    if(num<0){
        cout<<"please enter a positive term"<<endl;
    }else{
        cout<<"your fabonacci term is "<<fab(num)<<endl;
    }

    return 0;

}