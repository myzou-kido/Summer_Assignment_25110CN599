#include <iostream>
using namespace std;

int main(){

    int arr[5]={1,2,0,4,5};
    int sz=sizeof(arr)/sizeof(arr[1]);
    int start=0;
    int end=sz-1;

    int arr2[sz];

    for(int i=0;i<sz;i++){
        if(arr[i]==0){
            arr2[end]=0;
            end--;
        }else{
            arr2[start]=arr[i];
            start++;
        }
    }

    for(int i=0;i<sz;i++){
        cout<<arr2[i]<<endl; 
    }

    return 0;


}