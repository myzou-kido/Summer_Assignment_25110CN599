#include <iostream>
#include <vector>
using namespace std;

struct book{
        string name;
        string author; 
        int ID;
        bool issued;
        bool returned;
};


int main(){

    bool flag=true;

    vector<book>library;

    cout<<"welcome to the library data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add new books records\n2-> display all book records\n3-> search book\n4-> issue a book\n5-> book has return"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of new books you want to enter : ";
            cin>>n;
            cin.ignore();
        
            for(int i=0;i<n;i++){

                string  name,author;
                int ID;
                bool issued;
                cout<<"enter the book name : ";
                getline(cin,name);
                cout<<"enter the ID : ";
                cin>>ID;
                cout<<"enter the author name : ";
                cin.ignore();
                getline(cin,author);

                library.push_back({name,author,ID,false,true});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\t\t\tauthor\tID\tis issued\treturn"<<endl;
            for(auto i : library){
                cout<<num<<"\t"<<i.name<<"\t\t\t"<<i.author<<"\t"<<i.ID<<"\t"<<i.issued<<"\t\t"<<i.returned<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2,ID;
            string name,author;
            bool issued,returned;
            cout<<"1-> on the bases of name\n2-> on the bases of ID\n3-> on the bases of author"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\t\t\tauthor\tID\tis issued\treturn"<<endl;
                for(auto i : library){
                    if(name==i.name){
                      cout<<i.name<<"\t\t\t"<<i.author<<"\t"<<i.ID<<"\t"<<i.issued<<"\t\t"<<i.returned<<endl;
                    }
                }
            }else if(choice2==2){
                int ID;
                cout<<"enter the ID : ";
                cin>>ID;
                cout<<"name\t\t\tauthor\tID\tis issued\treturn"<<endl;
                for(auto i : library){
                    if(ID==i.ID){
                        cout<<i.name<<"\t\t\t"<<i.author<<"\t"<<i.ID<<"\t"<<i.issued<<"\t\t"<<i.returned<<endl;
                    }
                }
            }else{
                string author;
                cout<<"enter the salary : ";
                cin.ignore();
                getline(cin,author);
                cout<<"name\t\t\tauthor\tID\tis issued\treturn"<<endl;
                for(auto i : library){
                    if(author==i.author){
                        cout<<i.name<<"\t\t\t"<<i.author<<"\t"<<i.ID<<"\t"<<i.issued<<"\t\t"<<i.returned<<endl;
                    }
                }
            }
        }else if(choice==4){
            int ID;
            cout<<"enter the ID : ";
            cin>>ID;
            cin.ignore();
            for(auto & i : library){
                if(i.ID==ID){
                    i.issued=true;
                    i.returned=false;
                    break;
                }
            }
            cout<<"book has issued successfully"<<endl;

        }else if(choice==5){
            int ID;
            cout<<"enter the ID : ";
            cin>>ID;
            cin.ignore();
            for(auto & i : library){
                if(i.ID==ID&&i.issued==1){
                    i.returned=true;
                    i.issued=false;
                    cout<<"book has returned successfully"<<endl;
                    break;
                }
            }       
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;
}