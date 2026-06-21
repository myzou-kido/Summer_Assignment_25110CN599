#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> input(int n,vector<int>vec){

    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }

    return vec;

}

int main(){

    vector<int>arr1,arr2,arr3;
    int n1,n2;

    cout<<"please enter the size of 1st array"<<endl;
    cin>>n1;
    cout<<"please enter your 1st array"<<endl;
    arr1=input(n1,arr1);
    cout<<"please enter the size of 2nd array"<<endl;
    cin>>n2;
    cout<<"please enter your 2nd array"<<endl;
    arr2=input(n2,arr2);

    int ptr1=0;
    int ptr2=0;

    while(ptr1<n1&&ptr2<n2){
        if(arr1[ptr1]<arr2[ptr2]){
            arr3.push_back(arr1[ptr1++]);
        }else{
            arr3.push_back(arr2[ptr2++]);
        }
    }

    while(ptr1<n1){
        arr3.push_back(arr1[ptr1++]);
    }
    while(ptr2<n2){
        arr3.push_back(arr2[ptr2++]);
    }

    cout<<"your array is :"<<endl;

    for(int i:arr3){
        cout<<i<<endl;
    }

    return 0;

}