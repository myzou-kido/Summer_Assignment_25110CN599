#include <iostream>
using namespace std;

int sum(int num){

    if(num==0){
        return 0;
    }else{
        return num%10+sum(num/10);
    }
}

int main(){

    int num;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    num=abs(num);

    cout<<"sum of digit is "<<sum(num)<<endl;

    return 0;

}