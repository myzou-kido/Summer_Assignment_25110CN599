#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    vector<int>vec;
    int num;
    int largest=INT_MIN;
    int secondl=INT_MIN;
    cout<<"please provide the length of your array : ";
    cin>>num;

    cout<<"please enter your elements"<<endl;

    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    for(int i=0;i<num;i++){

        if(secondl<vec[i]){
            secondl=largest;
            largest=vec[i];
        }

    }

    cout<<"the 2nd largest number is "<<largest<<endl;

    return 0;

}