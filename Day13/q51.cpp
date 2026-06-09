#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    vector<int>vec;
    int num;
    int min=INT_MAX;
    int max=INT_MIN;

    cout<<"please provide the length of your array : ";
    cin>>num;

    cout<<"please enter your elements"<<endl;

    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    for(int i : vec){
        if(max<i){
            max=i;
        }if(min>i){
            min=i;
        }
    }

    cout<<"largest number is "<<max<<endl;
    cout<<"smallest number is "<<min<<endl;

    return 0;

}