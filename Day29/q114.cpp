#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec;
    bool flag=true;

    while(flag){

        int n;

        cout<<"welcome to array opration menu"<<endl;
        cout<<"1-> insert element\n2-> display elements\n3-> delete element\n4-> search element\n5-> update element"<<endl;
        cout<<endl;
        cin>>n;

        if(n==1){
            int size;
            cout<<"enter the number of elements you want to enter : ";
            cin>>size;
            cout<<"enter elements "<<endl;
            for(int i=0;i<size;i++){
                int x;
                cin>>x;
                vec.push_back(x);
            }
        }else if(n==2){
            cout<<endl;
            cout<<"elements are "<<endl;
            for(int i : vec){
                cout<<i<<endl;
            }
        }else if(n==3){
            int index;
            cout<<"enter the index : ";
            cin>>index;
            if(index>=0&&vec.size()>index){
                vec.erase(vec.begin()+index);
            }else{
                cout<<"position not found"<<endl;
            }
        }else if(n==4){
            int tar;
            cout<<"enter the target : ";
            cin>>tar;
            for(int i=0;i<vec.size();i++){
                if(vec[i]==tar){
                    cout<<"index is "<<i<<endl;
                }
            }
        }else{
            int index;
            int var;
            cout<<"enter the index : ";
            cin>>index;
            cout<<"enter the value : ";
            cin>>var;
            vec[index]=var;
        }

        cout<<"press 1 to continue if not press 0 : ";
        cin>>flag;

    }

    return 0;
}