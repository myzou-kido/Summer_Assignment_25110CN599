#include <iostream>
using namespace std;

int main(){

    int arr[5]={5,3,2,6,7};
    int sz=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<sz-1;i++){
        int min=i;
        for(int j=i+1;j<sz;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }
    cout<<"your array is : ";
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}