#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<string>vec;
    bool flag=true;

    while(flag){

        int n;

        cout<<"welcome to string opration menu"<<endl;
        cout<<"1-> insert string\n2-> display string\n3-> delete string\n4-> search string\n5-> update string"<<endl;
        cout<<endl;
        cin>>n;

        if(n==1){
            int size;
            cout<<"enter the number of string you want to enter : ";
            cin>>size;
            cin.ignore();
            cout<<"enter string "<<endl;
            for(int i=0;i<size;i++){
                string x;
                getline(cin,x);
                vec.push_back(x);
            }
            cout<<endl;
        }else if(n==2){
            cout<<endl;
            cout<<"strings are "<<endl;
            for(string i : vec){
                cout<<i<<endl;
            }
            cout<<endl;
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
            string tar;
            cout<<"enter the target : ";
            cin.ignore();
            getline(cin,tar);
            for(int i=0;i<vec.size();i++){
                if(vec[i]==tar){
                    cout<<"index is "<<i<<endl;
                }
            }
        }else{
            int index;
            string var;
            cout<<"enter the index : ";
            cin>>index;
            cout<<"enter the value : ";
            cin.ignore();
            getline(cin,var);
            vec[index]=var;
        }

        cout<<"press 1 to continue if not press 0 : ";
        cin>>flag;

    }

    return 0;
}