#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" is a factor of "<<num<<endl;
        }
    }

    return 0;

}