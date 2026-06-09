#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>vec;
    int num;

    cout<<"please provide the length of your array : ";
    cin>>num;

    cout<<"please enter your elements"<<endl;

    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    cout<<"your array is"<<endl;

    for(int i : vec){
        cout<<i<<endl;
    }

    return 0;

}