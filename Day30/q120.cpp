#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<stdlib.h>
using namespace std;

struct login{
    string name;
    int password;
    string email;
};

int main(){

    vector<login>social;

    bool flag=true;
    srand(time(0));

    cout<<"welcome to login"<<endl;
    cout<<endl;

    while(flag){

        int n;
        cout<<"please choose one from given below\n1-> login\n2-> regester "<<endl;
        cout<<endl;
        cin>>n;

        cin.ignore();
        if(n==1){

            bool flag1=true;

            string name,email;
            int pass;
            cout<<"please enter your user name : ";
            getline(cin,name);
            cout<<"please enter your numeric password : ";
            cin>>pass;

            for(auto & i : social){

                if(i.name==name&&i.password==pass){
                    cout<<"access granted\nwelcome back "<<i.name<<endl;
                    flag1=false;
                    return 0;
                }

            }

            cin.ignore();
            while(flag1){
                if(flag1){
                    int otp=0,check;
                    cout<<"incorrect user name or password or email"<<endl;
                    cout<<"enter your email to reset your password and username : ";
                    cin.ignore();
                    getline(cin,email);
                    for(auto i : social){
                        if(i.email==email){
                            otp=1000+rand()%1000;
                            cout<<"remember your otp : "<<otp<<endl;
                        }
                    }
                    cout<<"enter your otp : "<<endl;
                    cin>>check;
                    if(check==otp){
                        cout<<"access granted";
                        flag1=false;
                        return 0;
                    }
                }
            }
        cin.ignore();
        }else{
            cout<<"welcome to regestration"<<endl;
            string name,email;
            int pass;
            cout<<"please enter your user name : ";
            getline(cin,name);
            cout<<"please enter your numeric password : ";
            cin>>pass;
            cout<<"please enter your email : ";
            cin.ignore();
            getline(cin,email);

            social.push_back({name,pass,email});
            cout<<name<<endl;
            cout<<pass<<endl;
            cout<<email<<endl;
        }

        cout<<"to continue press 1 if not press 0 : "<<endl;
        cin>>flag;

    }


    return 0;
}