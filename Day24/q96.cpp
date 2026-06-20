#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str,ans;

    cout<<"please enter your string : ";
    getline(cin,str);

    sort(str.begin(),str.end());

    char comp=str[0];
    ans+=comp;

    for(char ch : str){
        if(comp!=ch){
            comp=ch;
            ans+=comp;
        }
    }

    cout<<"the updated string is : "<<ans<<endl;

    return 0;

}