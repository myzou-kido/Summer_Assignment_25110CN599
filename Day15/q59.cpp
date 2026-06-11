#include <iostream>
using namespace std;

int main(){

    int k,turn=0;;
    cout<<"enter the value by which the array should be rotated right : ";
    cin>>k;

    int arr[5]={1,2,3,4,5};
    int sz=sizeof(arr)/sizeof(arr[1]);

    int arr2[sz]={0};
    k%=sz;

    for(int i=k;i<sz;i++){
        arr2[i]=arr[i-k];
    }

    for(int i=0;i<k;i++){
        arr2[i]=arr[sz-k+i];
    }

    for(int i=0;i<sz;i++){
        cout<<arr2[i]<<endl; 
    }

    return 0;


}