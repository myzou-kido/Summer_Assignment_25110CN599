#include <iostream>
using namespace std;

int main(){

    int num;
    int ans=-1;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;

    if(num<=1){

        cout<<"their is no greatest prime factor for "<<num<<endl;
        return 0;
        
    }else{

    for(int i=2;i<=num;i++){

        int flag=1;

        if(num%i==0){

                for(int j=2;j*j<=i;j++){

                    if(i%j==0){
                        flag=0;
                        break;
                    }

                }

                if(flag){
                ans=i;
                }

        }

    }

    cout<<ans<<" is the greatest prime number of "<<num<<endl;

    }

    return 0;
    }