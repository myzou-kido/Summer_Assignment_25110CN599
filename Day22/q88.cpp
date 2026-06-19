#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;

    cout<<"please enter your string : ";
    getline(cin,str);

    for(char ch : str){
        if(ch!=' '){
            cout<<ch;
        }
        
    }

    return 0;

}