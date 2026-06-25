#include <iostream>
#include <vector>
using namespace std;

struct contact{
        string name;
        long long int phoneNo;
};


int main(){

    bool flag=true;

    vector<contact>phone;

    cout<<"welcome to the contact data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add contact records\n2-> display all records\n3-> search contact\n4-> edit contact\n5-> delete contact"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of contact you want to enter : ";
            cin>>n;
            
            for(int i=0;i<n;i++){

                string name;
                long long int contacts;
                cout<<"enter the contact name : ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter the contact number : ";
                cin>>contacts;

                phone.push_back({name,contacts});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\tcontact number"<<endl;
            for(auto i : phone){
                cout<<num<<"\t"<<i.name<<"\t"<<i.phoneNo<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2;
            long long int contacts;
            string name;
            cout<<"1-> on the bases of name\n2-> on the bases of phone number"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\tcontact number"<<endl;
                for(auto i : phone){
                    if(name==i.name){
                        cout<<i.name<<"\t"<<i.phoneNo<<endl;
                    }
                }
            }else{
                long long int contacts;
                cout<<"enter the phone number : ";
                cin>>contacts;
                cout<<"name\tcontact number"<<endl;
                for(auto i : phone){
                    if(contacts==i.phoneNo){
                        cout<<i.name<<"\t"<<i.phoneNo<<endl;
                    }
                }
            }
        }else if(choice==4){
            long long contacts;
            cout<<"enter the phone number : ";
            cin>>contacts;
            cin.ignore();
            for(auto & i : phone){
                if(contacts==i.phoneNo){
                    
                    cout<<"enter the contact name : ";
                    getline(cin,i.name);
                    cout<<"enter the phone number : ";
                    cin>>i.phoneNo;

                }
            }
        
        }else if(choice==5){
            long long contacts;
            cout<<"enter the phone number : ";
            cin>>contacts;
            for(int i=0;i<phone.size();i++){
                if(contacts==phone[i].phoneNo){
                    phone.erase(phone.begin()+i);
                    break;
                }

            }
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;
}