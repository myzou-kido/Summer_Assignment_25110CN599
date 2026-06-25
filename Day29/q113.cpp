#include<iostream>
#include<cmath>
using namespace std;

int add(double a,double b){
    return a+b;
}

int sub(double a,double b){
    return a-b;
}

int multi(double a,double b){
    return a*b;
}

int divide(double a,double b){
    return a/b;
}

int mod(int a,int b){
    return a%b;
}

int main(){

    int n;
    bool flag=true;

    while(flag){

        cout<<"choose the give option to procced in this calculator"<<endl;
        cout<<"1-> addition\n2-> subtraction\n3-> multiplication\n4-> divide\n5-> remainder\n6-> power and roots\n7-> logarithumic functions\n8-> trignometric functions\n9-> exponential function"<<endl;
        cout<<endl;
        cin>>n;

        if(n==1){
            double a,b;
            cout<<"enter numbers for addition"<<endl;
            cin>>a;
            cin>>b;
            cout<<"the addition is "<<add(a,b)<<endl;
        }else if(n==2){
            double a,b;
            cout<<"enter numbers for subtraction"<<endl;
            cin>>a;
            cin>>b;
            cout<<"the subtraction is "<<sub(a,b)<<endl;
        }else if(n==3){
            double a,b;
            cout<<"enter numbers for multiplication"<<endl;
            cin>>a;
            cin>>b;
            cout<<"the multiplication is "<<multi(a,b)<<endl;
        }else if(n==4){
            double a,b;
            cout<<"enter numbers for divide"<<endl;
            cin>>a;
            cin>>b;
            cout<<"the divide is "<<divide(a,b)<<endl;
        }else if(n==5){
            int a,b;
            cout<<"enter numbers for remainder"<<endl;
            cin>>a;
            cin>>b;
            cout<<"the remainder is "<<mod(a,b)<<endl;
        }else if(n==6){
            int n2;
            cout<<"\t1-> power\n\t2->squareroot\n\t3-> cuberoot"<<endl;
            cout<<endl;
            cin>>n2;

            if(n2==1){
                double a,b;
                cout<<"enter numbers for power"<<endl;
                cin>>a;
                cin>>b;
                cout<<"the power of "<<a<<"^"<<b<<" is "<<pow(a,b)<<endl;
            }else if(n2==2){
                double a;
                cout<<"enter numbers for squareroot"<<endl;
                cin>>a;
                cout<<"the power is "<<sqrt(a)<<endl;
            }else{
                double a;
                cout<<"enter numbers for cuberoot"<<endl;
                cin>>a;
                cout<<"the power of is "<<cbrt(a)<<endl;
            }
        }else if(n==7){
            int n2;
            cout<<"\t1-> natural log\n\t2-> base log"<<endl;
            cout<<endl;
            cin>>n2;

            if(n2==1){
                double a;
                cout<<"enter numbers for log"<<endl;
                cin>>a;
                cout<<"the log is "<<log(a)<<endl;
            }else{
                int a,b;
                cout<<"enter numbers for base and log"<<endl;
                cin>>a;
                cin>>b;
                cout<<"the log of is "<<log(b)/log(a)<<endl;
            }
        }else if(n==8){
            int n2;
            cout<<"\t1-> sin\n\t2-> cos\n\t3-> tan\n\t4-> cosec\n\t5-> sec\n\t6->cot"<<endl;
            cout<<endl;

            if(n2==1){
                double a;
                cout<<"enter numbers for sin"<<endl;
                cin>>a;
                cout<<"the sin is "<<sin(a)<<endl;
            }else if(n2==2){
                double a;
                cout<<"enter numbers for cos"<<endl;
                cin>>a;
                cout<<"the cos is "<<cos(a)<<endl;
            }else if(n2==3){
                double a;
                cout<<"enter numbers for tan"<<endl;
                cin>>a;
                cout<<"the tan is "<<tan(a)<<endl;
            }else if(n2==4){
                double a;
                cout<<"enter numbers for cosec"<<endl;
                cin>>a;
                cout<<"the cosec is "<<asin(a)<<endl;
            }else if(n2==5){
                double a;
                cout<<"enter numbers for sec"<<endl;
                cin>>a;
                cout<<"the sec is "<<acos(a)<<endl;
            }else{
                double a;
                cout<<"enter numbers for cot"<<endl;
                cin>>a;
                cout<<"the cot is "<<atan(a)<<endl;
            }
        }else{
            double a;
            cout<<"enter numbers for expontial"<<endl;
            cin>>a;
            cout<<"the expontial is "<<exp(a)<<endl;
        }

        cout<<"enter 1 to continue else type 0"<<endl;
        cin>>flag;

    }

    
    return 0;

}