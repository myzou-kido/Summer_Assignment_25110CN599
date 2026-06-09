#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    vector<int>vec;
    int num,odd=0,even=0;

    cout<<"please provide the length of your array : ";
    cin>>num;

    cout<<"please enter your elements"<<endl;

    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    for(int i : vec){
        if(i%2==0){
            even++;
        }else{
            odd++;
        }
        }

    cout<<"the count of even and odd are "<<even<<" & "<<odd<<" respectively"<<endl;

    return 0;

}