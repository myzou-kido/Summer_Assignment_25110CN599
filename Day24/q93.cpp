#include <iostream>
#include <string>
using namespace std;

int main(){

    string str1,str2,ans;
    int n;
    char save;

    cout<<"please enter your string : ";
    getline(cin,str1);
    cout<<"please enter your rotated string : ";
    getline(cin,str2);

    n=str1.length();

    for(int i=1;i<n-1;i++){
        save=str1[n-1];
        for(int j=n-1;j>0;j--){
            str1[j]=str1[j-1];
        }
        str1[0]=save;
        if(str1==str2){
            cout<<"yes, it is its rotated string"<<endl;
            return 0;
        }
    }

    cout<<"no, it isn't its rotated string"<<endl;


    return 0;

}