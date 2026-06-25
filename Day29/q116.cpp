#include <iostream>
#include <vector>
using namespace std;

struct product{
        string name;
        int ID;
        int price;
        int quantity;
};


int main(){

    bool flag=true;

    vector<product>inven;

    cout<<"welcome to the inventery data base"<<endl;
    cout<<endl;

    while(flag){

        int choice;

        cout<<"choose the options given to procced\n1-> add product records\n2-> display all records\n3-> search product\n4-> update record\n5-> delete record"<<endl;
        cout<<endl;
        cin>>choice;

        if(choice==1){
            int n;
            cout<<"enter the number of product you want to enter : ";
            cin>>n;
            
            for(int i=0;i<n;i++){

                string  name;
                int ID,price,quantity;
                cout<<"enter the product name : ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter the ID : ";
                cin>>ID;
                cout<<"enter the price : ";
                cin>>price;
                cout<<"enter the quantity : ";
                cin>>quantity;

                inven.push_back({name,ID,price,quantity});

                cout<<endl;

            }


        }else if(choice==2){
            int num=1;
            cout<<"s.no\tname\tID\tprice\tquantity"<<endl;
            for(auto i : inven){
                cout<<num<<"\t"<<i.name<<"\t"<<i.ID<<"\t"<<i.price<<"\t"<<i.quantity<<endl;
                num++;
            }
        }else if(choice==3){
            int choice2,price,ID;
            string name;
            cout<<"1-> on the bases of name\n2-> on the bases of ID\n3-> on the bases of price"<<endl;
            cin>>choice2;
            if(choice2==1){
                string name;
                cin.ignore();
                cout<<"enter the name : ";
                getline(cin,name);
                cout<<"name\tID\tprice\tquantity"<<endl;
                for(auto i : inven){
                    if(name==i.name){
                        cout<<i.name<<"\t"<<i.ID<<"\t"<<i.price<<"\t"<<i.quantity<<endl;
                    }
                }
            }else if(choice2==2){
                int ID;
                cout<<"enter the ID : ";
                cin>>ID;
                cout<<"name\tID\tprice\tquantity"<<endl;
                for(auto i : inven){
                    if(ID==i.ID){
                        cout<<i.name<<"\t"<<i.ID<<"\t"<<i.price<<"\t"<<i.quantity<<endl;
                    }
                }
            }else{
                int price;
                cout<<"enter the price : ";
                cin>>price;
                cout<<"name\tID\tprice\tquantity"<<endl;
                for(auto i : inven){
                    if(price==i.price){
                        cout<<i.name<<"\t"<<i.ID<<"\t"<<i.price<<"\t"<<i.quantity<<endl;
                    }
                }
            }
        }else if(choice==4){
            int ID;
            cout<<"enter the ID : ";
            cin>>ID;
            cin.ignore();
            for(auto & i : inven){
                if(ID==i.ID){
                    
                    cout<<"enter the product name : ";
                    getline(cin,i.name);
                    cout<<"enter the ID : ";
                    cin>>i.ID;
                    cout<<"enter the price : ";
                    cin>>i.price;
                    cout<<"enter the quantity : ";
                    cin>>i.quantity;

                }
            }
        
        }else if(choice==5){
            int ID;
            cout<<"enter the ID : ";
            cin>>ID;
            for(int i=0;i<inven.size();i++){
                if(ID==inven[i].ID){
                    inven.erase(inven.begin()+i);
                    break;
                }

            }
        }

        cout<<"for continue press 1 else 0"<<endl;
        cin>>flag;

    }

    return 0;
}