#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>vec;
    int len,count=0,num;

    cout<<"please provide the length of your array : ";
    cin>>len;

    cout<<"please enter your elements"<<endl;

    for(int i=0;i<len;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    cout<<"please provide the number for frequency : ";
    cin>>num;

    for(int i=0;i<len;i++){
        if(vec[i]==num){
            count++;
        }
    }
    cout<<"the frequency is "<<count<<endl;
    return 0;
        
}       