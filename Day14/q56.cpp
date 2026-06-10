#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>vec;
    int num;

    cout<<"please provide the length of your array : ";
    cin>>num;

    cout<<"please enter your elements"<<endl;

    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(vec[i]==vec[j]){
                cout<<vec[i]<<" is dublicate"<<endl;
            }
        }
    }

    return 0;

}