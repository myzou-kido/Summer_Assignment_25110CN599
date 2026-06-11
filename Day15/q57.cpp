#include <iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int sz=sizeof(arr)/sizeof(arr[1]);

    int arr2[sz];

    for(int i=sz-1;i>=0;i--){
        arr2[i]=arr[sz-1-i];
    }

    for(int i=0;i<sz;i++){
        cout<<arr2[i]<<endl; 
    }

    return 0;


}