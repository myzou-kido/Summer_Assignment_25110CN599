#include<iostream>
using namespace std;

int main(){

   int num;

    cout<<"enter your number for the procedure"<<endl;
    cin>>num;
    cout<<"multiplication table is :-"<<endl;

   for(int i=1;i<=10;i++){
      cout<<num<<" X "<<i<<" = "<<i*num<<endl;
   }

   return 0;

}