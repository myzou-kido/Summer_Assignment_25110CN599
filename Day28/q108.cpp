#include <iostream>
#include <vector>
using namespace std;

struct student{
        string name;
        int roll;
        int m1,m2,m3,m4,m5;
        int total_marks;
        float persentage;
        char grade;
};


int main(){

    bool flag=true;

    vector<student>marks;

    cout<<"welcome to the student's marks data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add student's marks records\n2-> display all records\n3-> search marks\n4-> update record\n5-> delete record"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of students's marks you want to enter : ";
            cin>>n;
            
            for(int i=0;i<n;i++){

                string  name;
                int roll,mark,m1,m2,m3,m4,m5;
                float per;
                char grade;
                cout<<"enter the student name : ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter the student roll number : ";
                cin>>roll;
                cout<<"enter the student marks of 1st subject : ";
                cin>>m1;
                cout<<"enter the student marks of 2nd subject : ";
                cin>>m2;
                cout<<"enter the student marks of 3rd subject : ";
                cin>>m3;
                cout<<"enter the student marks of 4th subject : ";
                cin>>m4;
                cout<<"enter the student marks of 5th subject : ";
                cin>>m5;
                mark=m1+m2+m3+m4+m5;
                per=mark/5;
                if(per<33.3){
                    grade='F';
                }else if(33.3<=per<50){
                    grade='C';
                }else if(50<=per<80){
                    grade='B';
                }else{
                    grade='A';
                }

                marks.push_back({name,roll,m1,m2,m3,m4,m5,mark,per,grade});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\troll\tm1\tm2\tm3\tm4\tm5\tmarks\tpersentage\tgrade"<<endl;
            for(auto i : marks){
                cout<<num<<"\t"<<i.name<<"\t"<<i.roll<<"\t"<<i.m1<<"\t"<<i.m2<<"\t"<<i.m3<<"\t"<<i.m4<<"\t"<<i.m5<<"\t"<<i.total_marks<<"\t\t"<<i.persentage<<"\t"<<i.grade<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2,roll;
            string name;
            cout<<"1-> on the bases of name\n2-> on the bases of roll number"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\troll\tm1\tm2\tm3\tm4\tm5\tmarks\tpersentage\tgrade"<<endl;
                for(auto i : marks){
                    if(name==i.name){
                        cout<<i.name<<"\t"<<i.roll<<"\t"<<i.m1<<"\t"<<i.m2<<"\t"<<i.m3<<"\t"<<i.m4<<"\t"<<i.m5<<"\t"<<i.total_marks<<"\t\t"<<i.persentage<<"\t"<<i.grade<<endl;
                    }
                }
            }else{
                int roll;
                cout<<"enter the roll number : ";
                cin>>roll;
                cout<<"name\troll\tm1\tm2\tm3\tm4\tm5\tmarks\tpersentage\tgrade"<<endl;
                for(auto i : marks){
                    if(roll==i.roll){
                        cout<<i.name<<"\t"<<i.roll<<"\t"<<i.m1<<"\t"<<i.m2<<"\t"<<i.m3<<"\t"<<i.m4<<"\t"<<i.m5<<"\t"<<i.total_marks<<"\t\t"<<i.persentage<<"\t"<<i.grade<<endl;
                    }
                }
            }
        }else if(choice==4){
            int roll;
            cout<<"enter the roll number : ";
            cin>>roll;
            cin.ignore();
            for(auto & i : marks){
                if(roll==i.roll){
                    
                    cout<<"enter the student name : ";
                    getline(cin,i.name);
                    cout<<"enter the student roll number : ";
                    cin>>i.roll;
                    cout<<"enter the student marks of 1st subject : ";
                    cin>>i.m1;
                    cout<<"enter the student marks of 2nd subject : ";
                    cin>>i.m2;
                    cout<<"enter the student marks of 3rd subject : ";
                    cin>>i.m3;
                    cout<<"enter the student marks of 4th subject : ";
                    cin>>i.m4;
                    cout<<"enter the student marks of 5th subject : ";
                    cin>>i.m5;
                    i.total_marks=i.m1+i.m2+i.m3+i.m4+i.m5;
                    i.persentage=i.total_marks/5;
                    if(i.persentage<33.3){
                        i.grade='F';
                    }else if(33.3<=i.persentage<50){
                        i.grade='C';
                    }else if(50<=i.persentage<80){
                        i.grade='B';
                    }else{
                        i.grade='A';
                    }
                cout<<endl;
                }
            }
        
        }else if(choice==5){
            int roll;
            cout<<"enter the roll number : ";
            cin>>roll;
            for(int i=0;i<marks.size();i++){
                if(roll==marks[i].roll){
                    marks.erase(marks.begin()+i);
                    break;
                }

            }
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;

}