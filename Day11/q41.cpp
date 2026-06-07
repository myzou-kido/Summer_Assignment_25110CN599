#include <iostream>
using namespace std;

int sum(int a, int b){

    int ans;

    ans=a+b;

    return ans;

}

int main(){

    int num1,num2;

    cout<<"enter your 1st number for the procedure"<<endl;
    cin>>num1;
    cout<<"enter your number for the procedure"<<endl;
    cin>>num2;

    cout<<"sum of given numbers is "<<sum(num1,num2)<<endl;

    return 0;
    
}