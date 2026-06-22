#include <iostream>
using namespace std;

int main(){

    int age;
    
    cout<<"I'm here to check if you are eligible for voting this year"<<endl;
    cout<<"please enter your age : ";
    cin>>age;

    if(age<18){
        cout<<"I'm sorry you are not eligible this year for voting"<<endl;
    }else{
        cout<<"you can vote this year"<<endl;
    }

    return 0;

}