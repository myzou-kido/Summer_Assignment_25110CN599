#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    int count=1;

    cout<<"please enter your string : ";
    getline(cin,str);

    for(char ch : str){
        if(ch==' '){
            count++;
        }
        
    }

    cout<<"total words are "<<count<<endl;

    return 0;

}