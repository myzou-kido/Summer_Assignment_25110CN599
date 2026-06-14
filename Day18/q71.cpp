#include <iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int tar=4;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int st=0;
    int end=sz-1;

    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==tar){
            cout<<"the target is at "<<mid<<" index"<<endl;
            return 0;
        }if(arr[mid]>tar){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return 0;
}
