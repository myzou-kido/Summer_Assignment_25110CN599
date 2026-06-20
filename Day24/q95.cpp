#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){

    string str,word,ans;
    int max=0,count=0;

    cout<<"please enter your string : ";
    getline(cin,str);

    stringstream ss(str);

    while(ss>>word){
        count=0;
        for(char ch:word){
            count++;
        }
        if(count>max){
            max=count;
            ans=word;
        }
    }

    cout<<"the longest word from the string is "<<ans<<endl;

    return 0;

}