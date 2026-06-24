#include <iostream>
#include <vector>
using namespace std;

struct employee{
        string name;
        int ID;
        float base_Salary;
        float bonous;
        float tax;
        float net_Salary;
};


int main(){

    bool flag=true;

    vector<employee>salaries;

    cout<<"welcome to the employee's salary data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add salary records\n2-> display all records\n3-> search salary\n4-> update record\n5-> delete record"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of employee' salary you want to enter : ";
            cin>>n;
            
            for(int i=0;i<n;i++){

                string  name;
                int ID;
                float salary,bonous,tax,net;
                cout<<"enter the employee name : ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter the ID : ";
                cin>>ID;
                cout<<"enter the base salary : ";
                cin>>salary;
                cout<<"enter the bonous : ";
                cin>>bonous;
                tax=(salary/100)*10;
                net=salary+bonous-tax;

                salaries.push_back({name,ID,salary,bonous,tax,net});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\tID\tbase salary\tbonous\ttax\tnet salary"<<endl;
            for(auto i : salaries){
                cout<<num<<"\t"<<i.name<<"\t"<<i.ID<<"\t"<<i.base_Salary<<"\t\t1"<<i.bonous<<"\t"<<i.tax<<"\t"<<i.net_Salary<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2,salary,ID;
            string name;
            cout<<"1-> on the bases of name\n2-> on the bases of ID"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\tID\tbase salary\tbonous\ttax\tnet salary"<<endl;
                for(auto i : salaries){
                    if(name==i.name){
                        cout<<i.name<<"\t"<<i.ID<<"\t"<<i.base_Salary<<"\t"<<i.bonous<<"\t"<<i.tax<<"\t"<<i.net_Salary<<endl;
                    }
                }
            }else{
                int ID;
                cout<<"enter the ID : ";
                cin>>ID;
                cout<<"name\tID\tbase salary\tbonous\ttax\tnet salary"<<endl;
                for(auto i : salaries){
                    if(ID==i.ID){
                        cout<<i.name<<"\t"<<i.ID<<"\t"<<i.base_Salary<<"\t"<<i.bonous<<"\t"<<i.tax<<"\t"<<i.net_Salary<<endl;
                    }
                }
            }
        }else if(choice==4){
            int ID;
            cout<<"enter the ID : ";
            cin>>ID;
            cin.ignore();
            for(auto & i : salaries){
                if(ID==i.ID){
                    cout<<"enter the employee name : ";
                    getline(cin,i.name);
                    cout<<"enter the ID : ";
                    cin>>i.ID;
                    cout<<"enter the salary : ";
                    cin>>i.base_Salary;
                    cout<<"enter the bonous : ";
                    cin>>i.bonous;
                    i.tax=(i.base_Salary/100)*10;
                    i.net_Salary=i.base_Salary+i.bonous-i.tax;
                }
            }
        
        }else if(choice==5){
            int ID;
            cout<<"enter the ID : ";
            cin>>ID;
            for(int i=0;i<salaries.size();i++){
                if(ID==salaries[i].ID){
                    salaries.erase(salaries.begin()+i);
                    break;
                }

            }
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;

}