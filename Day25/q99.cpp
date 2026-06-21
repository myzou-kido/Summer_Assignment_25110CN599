#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<string>str;
    int sz;

    cout<<"please enter the number of names : ";
    cin>>sz;
    cout<<"please enter your string : ";
    for(int i=0;i<sz;i++){
        string x;
        cin>>x;
        str.push_back(x);
    }

    sort(str.begin(),str.end());

    cout<<"the alphabetical order of the names are "<<endl;

    for(string i:str){
        cout<<i<<endl;
    }

    return 0;

}