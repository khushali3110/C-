#include<iostream>
#include<string>
using namespace std;
int main(){
    int num1;
    cout<<"Enter Num1 : ";
    cin>>num1;
    int num2;
    cout<<"Enter Num2 : ";
    cin>>num2;
    char exp;
    cout<<"Enter Operator : ";
    cin>>exp;
    switch(exp){
        case '+' : 
            cout<<"Addition : "<<num1+num2<<endl;
            break;
        case '-' : 
            cout<<"Subtraction : "<<num1-num2<<endl;
            break;
        case '*' : 
            cout<<"Multiplication : "<<num1*num2<<endl;
            break;
        case '/' : 
            cout<<"Divide : "<<num1/num2<<endl;
            break;
        case '%' : 
            cout<<"Remainder : "<<num1%num2<<endl;
            break;
        default : 
        cout<<"Please enter correct operator!"<<endl;
    }
}