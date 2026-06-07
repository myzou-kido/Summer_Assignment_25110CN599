#include <iostream>
using namespace std;

int fact(int num){

    int ans=1;

    for(int i=2;i<=num;i++){
        ans*=i;
    }

    return ans;

}

int main(){

    int num;
    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    cout<<"the factorial of "<<num<<" is "<<fact(num)<<endl;

    return 0;

}