#include <iostream>
#include <string>
using namespace std;

int main(){

    string str,check=" ";
    int index=0;
    bool flag=false;

    cout<<"please enter your string : ";
    getline(cin,str);

    for(char ch1 : str){
        int count=0;
        for(char ch2 : str){
            if(isalpha(ch1)){
                if(ch1==ch2){
                    count++;
                }
            }
        }for(char ch3 : check){
            if(ch1==ch3){
                flag=false;
                break;
            }else{
                flag=true;
            }
        }
        if(isalpha(ch1)&& flag){
            cout<<"the frequency of "<<ch1<<" is "<<count<<endl;
        }
        check.push_back(ch1);
    }

    return 0;

}