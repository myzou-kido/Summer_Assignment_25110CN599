#include<iostream>
using namespace std;

int main(){

    int low,high;

    cout<<"enter your lower limit for the procedure : ";
    cin>>low;
     cout<<"enter your upper limit for the procedure : ";
    cin>>high;

    for(int i=low;i<=high;i++){

        int digit=0;
        int sum=0;
        int test=i;

        while(test>0){

            digit++;
            test/=10;

        }

        test=i;

        while(test>0){

            int multiplier=1;
            int rem;
            rem=test%10;
        
            for(int i=0;i<digit;i++){

                multiplier*=rem;

            }

            sum+=multiplier;
            test/=10;

        }

        if(sum==i){
            cout<<i<<" is an armstrong number"<<endl;
        }

    }

    return 0;

}