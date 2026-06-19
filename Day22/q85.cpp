#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str,check;

    cout<<"please enter your string : ";
    getline(cin,str);
    check=str;

    reverse(check.begin(),check.end());

    if(check==str){
        cout<<"yes, this string is a palandrome";
    }else{
        cout<<"no, this string is not a palandrome";
    }

    return 0;

}