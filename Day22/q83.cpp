#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    int vov=0,con=0;

    cout<<"please enter your string : ";
    getline(cin,str);

    for(char ch : str){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vov++;
        }else if(isalpha(ch)){
            con++;
        }
    }

    cout<<"the vowles are "<<vov<<"\nthe consonent are "<<con<<endl;

    return 0;

}