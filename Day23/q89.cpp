#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    char ans;

    cout<<"please enter your string : ";
    getline(cin,str);

    for(char ch1 : str){
        int count=0;
        for(char ch2: str){
            if(ch1==ch2){
                count++;
            }
        }if(count==1){
            ans=ch1;
            break;
        }
    }
    

    cout<<"first non repeating character is "<<ans<<endl;

    return 0;

}