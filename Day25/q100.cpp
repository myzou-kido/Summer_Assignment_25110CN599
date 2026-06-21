#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    vector<string>str;
    vector<int>size,index;
    int sz;

    cout<<"please enter the number of names : ";
    cin>>sz;
    cout<<"please enter your string : ";
    for(int i=0;i<sz;i++){
        int count=0;
        string x;
        cin>>x;
        for(char j:x){
            count++;
        }
        
        str.push_back(x);
        size.push_back(count);
        index.push_back(i);
    }

    for(int i=0;i<sz;i++){
        for(int j=0;i<sz-i-1;i++){
            if(size[j]>size[j+1]){
                //forsize
                int temp1=size[j];
                size[j]=size[j+1];
                size[j+1]=temp1;
                //forindex
                int temp2=index[j];
                index[j]=index[j+1];
                index[j+1]=temp2;
            }
        }
    }

    for(int i:size){
        cout<<i<<endl;
    }

    cout<<"arranged accourding to the length"<<endl;

    for(int i:index){
        cout<<str[i]<<endl;
    }

    return 0;

}