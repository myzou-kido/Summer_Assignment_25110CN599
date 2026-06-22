#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int pin,amount;//pin is 1234
    bool flag=true;
    srand(time(0));
    amount=rand();

    cout<<"welcome to the ATM mashine";

    cout<<"please enter your pin : ";
    cin>>pin;

    if(pin==1234){

        while(flag){

            int choice,change;

            cout<<"choose the following options\n1-> check bank balance\n2-> deposit cash\n3-> debit cash"<<endl;
            cin>>choice;


            if(choice==1){
                cout<<"total bank balance is "<<amount<<endl;
            }else if(choice==2){
                cout<<"enter the amount you want to add : ";
                cin>>change;
                amount+=change;
                cout<<"deposited cash successfuly"<<endl;
            }else{
                cout<<"what amount of cash you want to debit : ";
                cin>>change;
                if(change>amount){
                    cout<<"unsuffecient balance"<<endl;;
                }else{
                    amount-=change;
                    cout<<"debited cash successfully"<<endl;
                }
            }

            cout<<"press 1 to continue or press 0 to terminate"<<endl;
            cin>>flag;

        }

    }

    cout<<"thankyou for using us"<<endl;

    return 0;

}