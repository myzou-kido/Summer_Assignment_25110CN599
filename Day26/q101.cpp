#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    bool flag=1;
    int points=0;

    cout<<"welcome to the random game\nwhere you have to guess a random number from 0 to 5"<<endl;
    cout<<"rules\n1-> if you win, you will gain 50 points\n2-> if you loose, you will losse 50 points"<<endl;
    cout<<endl;

    srand(time(0));

    while(flag){

    int turn,guess;

    cout<<"enter a guess : ";
    cin>>guess;

    turn=rand()%6;

    if(turn==guess){
        points+=50;
        cout<<"yay!, congraulation you have won and your points are "<<points<<endl;
    }else{
        points-=50;
        cout<<"hush!, you lost this time and your points are "<<points<<endl;
    }

    cout<<"if you want to continue press 1 if not press 0"<<endl;
    cin>>flag;

    }

    cout<<"your total points are "<<points<<endl<<"come again!"<<endl;
    

    return 0;

}