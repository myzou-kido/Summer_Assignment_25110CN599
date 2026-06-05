#include<iostream>
using namespace std;

int main(){

    int num=5;

   for(int i=0;i<num;i++){
        cout<<"*";
   }

   cout<<endl;

   for(int i=0;i<num-2;i++){
        cout<<"*";
        for(int j=0;j<num-2;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
   }

   for(int i=0;i<num;i++){
        cout<<"*";
   }  
    
    return 0;

}