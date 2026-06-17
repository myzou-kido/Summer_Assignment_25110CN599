#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    int len=0;

    cout<<"please enter your string : ";
    getline(cin,str);

    for(int chr : str){
        len++;
    }

    cout<<"the length of given string is "<<len<<endl;

    return 0;

}