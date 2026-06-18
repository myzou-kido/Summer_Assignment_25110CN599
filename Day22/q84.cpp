#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;

    cout<<"please enter your string : ";
    getline(cin,str);

    cout<<"your string is ";

    for(char ch : str){
        if(islower(ch)){
            ch=ch-32;
            cout<<ch;
        }
        else{
            cout<<ch;
        }
    }

    return 0;

}
