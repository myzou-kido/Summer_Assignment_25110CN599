#include <iostream>
using namespace std;

int main(){

    int arr[3]={2,1,2};
    int sz=sizeof(arr)/sizeof(arr[1]);
    int check=sz;
    int index=0;

    int arr2[sz];

    for(int i=0;i<sz;i++){
        check--;
        int flag=0;
        for(int j=i+1;j<sz;j++){
            if(arr[i]==arr[j]){
                break;
            }else{
                flag++;
            }
        }
        if(flag==check){
            arr2[index]=arr[i];
            index++;
        }
    }

    for(int i=0;i<index;i++){
        cout<<arr2[i]<<endl; 
    }

    return 0;


}