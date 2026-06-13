#include <iostream>
using namespace std;

int main(){

    int sz1,sz2;

    cout<<"enter the size of array 1 :";
    cin>>sz1;


    int arr1[sz1];

    cout<<"enter your array 1 :";
    for(int i=0;i<sz1;i++){
        cin>>arr1[i];
    }

    cout<<"enter the size of array 2 :";
    cin>>sz2;

    int arr2[sz2];

    cout<<"enter your array 2 :";
    for(int i=0;i<sz2;i++){
        cin>>arr2[i];
    }

    int unionarr[sz1+sz2];
    int index=sz1;

    for(int i=0;i<sz1;i++){
        unionarr[i]=arr1[i];
    }

    for(int i=0;i<sz2;i++){
        int found=1;
        for(int j=0;j<index;j++){
            if(unionarr[j]==arr2[i]){
                found=0;
                break;
            }
        }
        if(found){
            unionarr[index++]=arr2[i];
        }
    }

    cout<<"your union array is :"<<endl;
    for(int i=0;i<index;i++){
        cout<<unionarr[i]<<endl;
    }

    return 0;

}