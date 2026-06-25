#include <iostream>
#include <vector>
using namespace std;

struct booking{
        string name;
        int seatno;
        bool isbooked;
};


int main(){

    bool flag=true;

    vector<booking>seat;

    cout<<"welcome to the booking data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add booking records\n2-> display all records\n3-> search booking\n4-> update record\n5-> delete record"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of booking you want to enter : ";
            cin>>n;
            
            for(int i=0;i<n;i++){

                string  name;
                int seatno;
                bool isbooked;
                cout<<"enter the employee name : ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter the seat number : ";
                cin>>seatno;
                cout<<"enter 1 if booked : ";
                cin>>isbooked;

                seat.push_back({name,seatno,isbooked});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\tseat no.\tis booked"<<endl;
            for(auto i : seat){
                cout<<num<<"\t"<<i.name<<"\t"<<i.seatno<<"\t"<<i.isbooked<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2,seatno;
            bool isbooked;
            string name;
            cout<<"1-> on the bases of name\n2-> on the bases of seat number"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\tseat no.\tis booked"<<endl;
                for(auto i : seat){
                    if(name==i.name){
                        cout<<i.name<<"\t"<<i.seatno<<"\t"<<i.isbooked<<endl;
                    }
                }
            }else{
                int seatNo;
                cout<<"enter the seat number : ";
                cin>>seatNo;
                cout<<"name\tseat no.\tis booked"<<endl;
                for(auto i : seat){
                    if(seatNo==i.seatno){
                        cout<<i.name<<"\t"<<i.seatno<<"\t"<<i.isbooked<<endl;
                    }
                }
            }
        }else if(choice==4){
            int seatNo;
            cout<<"enter the seat number : ";
            cin>>seatNo;
            cin.ignore();
            for(auto & i : seat){
                if(seatNo==i.seatno){
                    
                    cout<<"enter the name : ";
                    getline(cin,i.name);
                    cout<<"enter the seat number : ";
                    cin>>i.seatno;
                    cout<<"enter 1 if booked : ";
                    cin>>i.isbooked;

                }
            }
        
        }else if(choice==5){
            int seatNo;
            cout<<"enter the seat number : ";
            cin>>seatNo;
            for(int i=0;i<seat.size();i++){
                if(seatNo==seat[i].seatno){
                    seat.erase(seat.begin()+i);
                    break;
                }

            }
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;
}