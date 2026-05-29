#include<iostream>
using namespace std;

int main(){

    int num,rem,rev_Num,actual_Num=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    num=abs(num);
    rev_Num=num;

        while(num>0){
            rem=num%10;
            actual_Num=rem+actual_Num*10;
            num/=10;
        }
    
    if(rev_Num==actual_Num){
        cout<<"yes, it is a palindrome";
    }else{
        cout<<"no, it is not a palindrome";
    }

    return 0;

}