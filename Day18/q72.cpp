#include <iostream>
using namespace std;

int main(){

    int arr[5]={5,3,2,6,7};
    int sz=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<sz-1;i++){
        for(int j=0;j<sz-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"your array is : ";
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}