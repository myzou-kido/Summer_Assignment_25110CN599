#include <iostream>
#include <vector>
using namespace std;

struct employee{
        string name;
        int ID;
        int salary;
};


int main(){

    bool flag=true;

    vector<employee>emp;

    cout<<"welcome to the employee data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add employee records\n2-> display all records\n3-> search employee\n4-> update record\n5-> delete record"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of employee you want to enter : ";
            cin>>n;
            
            for(int i=0;i<n;i++){

                string  name;
                int ID,salary;
                cout<<"enter the employee name : ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter the ID : ";
                cin>>ID;
                cout<<"enter the salary : ";
                cin>>salary;

                emp.push_back({name,ID,salary});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\tID\tsalary"<<endl;
            for(auto i : emp){
                cout<<num<<"\t"<<i.name<<"\t"<<i.ID<<"\t"<<i.salary<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2,salary,ID;
            string name;
            cout<<"1-> on the bases of name\n2-> on the bases of ID\n3-> on the bases of salary"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\tID\tsalary"<<endl;
                for(auto i : emp){
                    if(name==i.name){
                        cout<<i.name<<"\t"<<i.ID<<"\t"<<i.salary<<endl;
                    }
                }
            }else if(choice2==2){
                int ID;
                cout<<"enter the ID : ";
                cin>>ID;
                cout<<"name\tID\tsalary"<<endl;
                for(auto i : emp){
                    if(ID==i.ID){
                        cout<<i.name<<"\t"<<i.ID<<"\t"<<i.salary<<endl;
                    }
                }
            }else{
                int salary;
                cout<<"enter the salary : ";
                cin>>salary;
                for(auto i : emp){
                    if(salary==i.salary){
                        cout<<i.name<<"\t"<<i.ID<<"\t"<<i.salary<<endl;
                    }
                }
            }
        }else if(choice==4){
            int ID;
            cout<<"enter the ID : ";
            cin>>ID;
            cin.ignore();
            for(auto & i : emp){
                if(ID==i.ID){
                    
                    cout<<"enter the employee name : ";
                    getline(cin,i.name);
                    cout<<"enter the ID : ";
                    cin>>i.ID;
                    cout<<"enter the salary : ";
                    cin>>i.salary;

                }
            }
        
        }else if(choice==5){
            int ID;
            cout<<"enter the ID : ";
            cin>>ID;
            for(int i=0;i<emp.size();i++){
                if(ID==emp[i].ID){
                    emp.erase(emp.begin()+i);
                    break;
                }

            }
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;
}