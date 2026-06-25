#include <iostream>
#include <vector>
using namespace std;

struct account{
        string name;
        int accNo;
        float balance;
};


int main(){

    bool flag=true;

    vector<account>bank;

    cout<<"welcome to the bank data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add bank records\n2-> display all records\n3-> search account\n4-> update record\n5-> delete record"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of accounts you want to enter : ";
            cin>>n;
            
            for(int i=0;i<n;i++){

                string  name;
                int accNo;
                float balance;
                cout<<"enter the employee name : ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter the account number : ";
                cin>>accNo;
                cout<<"enter the balance : ";
                cin>>balance;

                bank.push_back({name,accNo,balance});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\taccNo\tbalance"<<endl;
            for(auto i : bank){
                cout<<num<<"\t"<<i.name<<"\t"<<i.accNo<<"\t"<<i.balance<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2,accNo;
            float balance;
            string name;
            cout<<"1-> on the bases of name\n2-> on the bases of accNo\n3-> on the bases of balance"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\taccNo\tbalance"<<endl;
                for(auto i : bank){
                    if(name==i.name){
                        cout<<i.name<<"\t"<<i.accNo<<"\t"<<i.balance<<endl;
                    }
                }
            }else if(choice2==2){
                int accNo;
                cout<<"enter the ID : ";
                cin>>accNo;
                cout<<"name\taccNo\tbalance"<<endl;
                for(auto i : bank){
                    if(accNo==i.accNo){
                        cout<<i.name<<"\t"<<i.accNo<<"\t"<<i.balance<<endl;
                    }
                }
            }else{
                float balance;
                cout<<"enter the salary : ";
                cin>>balance;
                cout<<"name\taccNo\tbalance"<<endl;
                for(auto i : bank){
                    if(balance==i.balance){
                        cout<<i.name<<"\t"<<i.accNo<<"\t"<<i.balance<<endl;
                    }
                }
            }
        }else if(choice==4){
            int accNo;
            cout<<"enter the account number : ";
            cin>>accNo;
            cin.ignore();
            for(auto & i : bank){
                if(accNo==i.accNo){
                    
                    cout<<"enter the employee name : ";
                    getline(cin,i.name);
                    cout<<"enter the account number : ";
                    cin>>i.accNo;
                    cout<<"enter the balance : ";
                    cin>>i.balance;

                }
            }
        
        }else if(choice==5){
            int accNo;
            cout<<"enter the accNO : ";
            cin>>accNo;
            for(int i=0;i<bank.size();i++){
                if(accNo==bank[i].accNo){
                    bank.erase(bank.begin()+i);
                    break;
                }

            }
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;
}