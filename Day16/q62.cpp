#include <iostream>
using namespace std;

int main(){

    int arr[8]={1,2,3,3,4,5,4,4};
    int sz=sizeof(arr)/sizeof(arr[1]);
    int index=0;

    int arr2[sz];

    for(int i=0;i<sz;i++){
        int freq=1;
        for(int j=i+1;j<sz;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        arr2[index]=freq;
        index++;
    }

    int max=0;
    int ans;

    for(int i=0;i<sz;i++){
        if(arr2[i]>max){
            max=arr2[i];
            ans=i;
        }
    }
    cout<<"greatest frequency is "<<max<<" of "<<arr[ans]<<endl;

    return 0;


}