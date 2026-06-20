#include <iostream>
#include <string>
using namespace std;

int main(){

    string str,ans;
    int count=0;

    cout<<"please enter your string : ";
    getline(cin,str);

    char comp=str[0];
    cout<<comp;

    for(char ch : str){
        if(comp!=ch){
            comp=ch;
            cout<<count<<comp;
            count=1;
        }else{
            count++;
        }
    }

    cout<<count;

    return 0;

}