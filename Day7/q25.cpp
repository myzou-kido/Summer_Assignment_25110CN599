#include <iostream>
using namespace std;

int fact(int num){

    if( num==0 || num==1 ){
        return 1;
    }else{
        return num*fact(num-1);
    }

}

int main(){

    int num;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    if(num<0){
        cout<<"negative number doesn't have factorial"<<endl;
    }else{
        cout<<"factorial of "<<num<<" is "<<fact(num)<<endl;
    }

    return 0;

}