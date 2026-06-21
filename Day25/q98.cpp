#include <iostream>
#include <string>
using namespace std;

int main(){

    string str,checker="";
    char ans;
    bool flag=true;

    cout<<"please enter your string : ";
    getline(cin,str);

    for(char ch1 : str){
        int count=0;
        for(char ch2: str){
            if(ch1==ch2){
                count++;
            }
        }if(count>=2){
            flag=true;
            for(char i : checker){
                if(ch1==i){
                flag=false;
                break;
                }
            }
            if(flag){
            cout<<ch1<<endl;
            checker.push_back(ch1);
            }
        }
    }

    return 0;

}