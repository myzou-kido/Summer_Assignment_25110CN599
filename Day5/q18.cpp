#include <iostream>
using namespace std;

int main(){

    int num,rem,test,sum=0;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    test=num;

    while(test>0){
        
        int fact=1;
        rem=test%10;

        for(int i=1;i<=rem;i++){
            fact*=i;
        }

        sum+=fact;
        test/=10;

    }

    if(num==sum){
        cout<<num<<" is a strong number"<<endl;
    }else{
        cout<<num<<" is not a strong number"<<endl;
    }

    return 0;

}