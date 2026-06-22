#include <iostream>
using namespace std;

int main(){

    int point=0,ans;
    string str;

    cout<<"lets start the quiz\nit would have 5 qustions"<<endl;
    cout<<endl;

    cout<<"whats 14 X 3 = ";
    cin>>ans;
    if(ans==42){
        cout<<"Yay!, you did great"<<endl;
        point++;
    }else{
        cout<<"better luck next time"<<endl;
    }

    cout<<"what the capital of spain : ";
    cin>>str;
    if(str=="madrid"){
        cout<<"Yay!, you did great"<<endl;
        point++;
    }else{
        cout<<"better luck next time"<<endl;
    }

    cout<<"who won FIFA 2022 : ";
    cin>>str;
    if(str=="argentina"){
        cout<<"Yay!, you did great"<<endl;
        point++;
    }else{
        cout<<"better luck next time"<<endl;
    }

    cout<<"whats the lagrest ocean : ";
    cin>>str;
    if(str=="pacific"){
        cout<<"Yay!, you did great"<<endl;
        point++;
    }else{
        cout<<"better luck next time"<<endl;
    }

    cout<<"what the square root of 625 : ";
    cin>>ans;
    if(ans==25){
        cout<<"Yay!, you did great"<<endl;
        point++;
    }else{
        cout<<"better luck next time"<<endl;
    }

    cout<<endl;
    cout<<"you scored "<<point<<" out of 5"<<endl;

    return 0;

}