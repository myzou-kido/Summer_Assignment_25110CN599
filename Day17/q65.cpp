#include <iostream>
using namespace std;

int main(){

    int sz1,sz2;

    cout<<"enter the size of array 1 :";
    cin>>sz1;
    cout<<"enter the size of array 2 :";
    cin>>sz2;

    int arr1[sz1];
    int arr2[sz2];
    int mergedarr[sz1+sz2];


    cout<<"enter your array 1 :";
    for(int i=0;i<sz1;i++){
        cin>>arr1[i];
        mergedarr[i]=arr1[i];
    }

    cout<<"enter your array 2 :";
    for(int i=0;i<sz1;i++){
        cin>>arr2[i];
        mergedarr[sz1+i]=arr2[i];
    }

    

    for(int i=0;i<sz1+sz2;i++){
        cout<<mergedarr[i]<<endl; 
    }

    return 0;


}