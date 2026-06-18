#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str;

    cout<<"please enter your string : ";
    getline(cin,str);

    reverse(str.begin(),str.end());

    cout<<"the reverse is : ";
    cout<<str<<endl;

    return 0;

}