#include <iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int sz=sizeof(arr)/sizeof(arr[1]);
    int arr2[sz];
    int num;

    cout<<"enter the sum : ";
    cin>>num;

    for(int i=0;i<sz;i++){
        for(int j=1+i;j<sz;j++){
            if(arr[j]+arr[i]==num){
                cout<<arr[i]<<" & "<<arr[j]<<" are the sum"<<endl;
            }
        }
    }

    return 0;

}