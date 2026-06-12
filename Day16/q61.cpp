#include <iostream>
using namespace std;

int main(){

    int arr[5]={2,3,4,5,7};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int index=0;

    int arr2[2*sz];

    for(int i=1;i<=arr[sz-1];i++){
        if(i<arr[index]){
            arr2[i-1]=i;
        }else{
            arr2[i-1]=arr[index];
            index++;
        }
        
    }

    for(int i=0;i<arr[sz-1];i++){
        cout<<arr2[i]<<endl; 
    }

    return 0;


}