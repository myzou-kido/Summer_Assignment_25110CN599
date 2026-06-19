#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str1,str2;

    cout<<"please enter your string : ";
    getline(cin,str1);
    cout<<"please enter its anagram string : ";
    getline(cin,str2);

    if(str1.length()!=str2.length()){
        cout<<"it is not an anagram string"<<endl;
        return 0;
    }

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1==str2){
        cout<<"it is an anagram string"<<endl;
    }else{
        cout<<"it is an anagram string"<<endl;
    }


    return 0;

}