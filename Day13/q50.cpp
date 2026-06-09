#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>vec;
    int num,sum=0,avg;

    cout<<"please provide the length of your array : ";
    cin>>num;

    cout<<"please enter your elements"<<endl;

    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    for(int i : vec){
        sum+=i;
    }

    cout<<"the sum is "<<sum<<endl;
    cout<<"the average is "<<sum/num<<endl;

    return 0;

}