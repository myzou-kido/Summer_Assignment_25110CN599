#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int max(vector<int>vec){

    int max=INT_MIN;

    for(int i : vec){

        if(max<i){
            max=i;
        }

    }

    return max;

}

int main(){

    vector<int>arr;
    int flag=1;
    int count=0;

    cout<<"enter the vlaues"<<endl;

    while(flag==1){

        int x;

        cin>>x;
        arr.push_back(x);

        cout<<"if you want to enter more numbers\nthen type 1\nto stop type 0"<<endl;
        cin>>flag;
        count++;

    }

    cout<<"the maximun number is "<<max(arr)<<endl;

    return 0;

}