#include <iostream>
#include <vector>
using namespace std;

struct student{
        string name;
        int roll;
        int marks;
};


int main(){

    bool flag=true;

    vector<student>students;

    cout<<"welcome to the student data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add student records\n2-> display all records\n3-> search student\n4-> update record\n5-> delete record"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of students you want to enter : ";
            cin>>n;
            
            for(int i=0;i<n;i++){

                string  name;
                int roll,marks;
                cout<<"enter the student name : ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter the student roll number : ";
                cin>>roll;
                cout<<"enter the student marks : ";
                cin>>marks;

                students.push_back({name,roll,marks});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\troll\tmarks"<<endl;
            for(auto i : students){
                cout<<num<<"\t"<<i.name<<"\t"<<i.roll<<"\t"<<i.marks<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2,marks,roll;
            string name;
            cout<<"1-> on the bases of name\n2-> on the bases of number\n3-> on the bases of marks"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\troll\tmarks"<<endl;
                for(auto i : students){
                    if(name==i.name){
                        cout<<i.name<<"\t"<<i.roll<<"\t"<<i.marks<<endl;
                    }
                }
            }else if(choice2==2){
                int roll;
                cout<<"enter the roll number : ";
                cin>>roll;
                cout<<"name\troll\tmarks"<<endl;
                for(auto i : students){
                    if(roll==i.roll){
                        cout<<i.name<<"\t"<<i.roll<<"\t"<<i.marks<<endl;
                    }
                }
            }else{
                int marks;
                cout<<"enter the marks : ";
                cin>>marks;
                cout<<"name\troll\tmarks"<<endl;
                for(auto i : students){
                    if(marks==i.marks){
                        cout<<i.name<<"\t"<<i.roll<<"\t"<<i.marks<<endl;
                    }
                }
            }
        }else if(choice==4){
            int roll;
            cout<<"enter the roll number : ";
            cin>>roll;
            cin.ignore();
            for(auto & i : students){
                if(roll==i.roll){
                    
                    cout<<"enter the student name : ";
                    getline(cin,i.name);
                    cout<<"enter the student roll number : ";
                    cin>>i.roll;
                    cout<<"enter the student marks : ";
                    cin>>i.marks;

                }
            }
        
        }else if(choice==5){
            int roll;
            cout<<"enter the roll number : ";
            cin>>roll;
            for(int i=0;i<students.size();i++){
                if(roll==students[i].roll){
                    students.erase(students.begin()+i);
                    break;
                }

            }
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;

}