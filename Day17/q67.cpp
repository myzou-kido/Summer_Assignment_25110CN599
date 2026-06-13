#include <iostream>
using namespace std;

int main(){

    int sz1,sz2;

    cout<<"enter the size of array 1 :";
    cin>>sz1;


    int arr1[sz1];

    cout<<"enter your array 1 :";
    for(int i=0;i<sz1;i++){
        cin>>arr1[i];
    }

    cout<<"enter the size of array 2 :";
    cin>>sz2;

    int arr2[sz2];

    cout<<"enter your array 2 :";
    for(int i=0;i<sz2;i++){
        cin>>arr2[i];
    }

    int intersection[sz1+sz2];
    int index=0;

    for(int i=0;i<sz1;i++){
        for(int j=0;j<sz2;j++){
            if(arr1[i]==arr2[j]){
                intersection[index]=arr1[i];
                index++;
                break;
            }
        }
    }

    for(int i=0;i<sz1;i++){
        for(int j=0;j<sz2;j++){
            if(arr1[i]==arr2[j]){
                bool flag=1;
                for(int k=0;k<index;k++){
                    if(intersection[k]==arr1[i]){
                        flag=0;
                        break;
                    }if(flag){
                        intersection[index++]=arr1[i];
                    }
                }
            }
            break;
        }
    }



    cout<<"your intersection array is :"<<endl;
    for(int i=0;i<index;i++){
        cout<<intersection[i]<<endl;
    }

    return 0;


}