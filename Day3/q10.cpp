#include<iostream>
using namespace std;

int main(){

    int high,low;

    cout<<"enter lower limit for the procedure"<<endl;
    cin>>low;
    cout<<"enter upper limit for the procedure"<<endl;
    cin>>high;

    for(int num=low;num<=high;num++){

        int flag=1;

        if(num==1 || num==0 || num<0){

            flag=0;

        }else{

            for(int i=2;i*i<=num;i++){

                if(num%i==0){
                    flag=0;
                    break;
                }
            }
        }

        
        if(flag){
            cout<<num<<" is prime"<<endl;
        }

    }

    return 0;

}