#include<iostream>
using namespace std;

int main(){

    char operation;
    int num1;
    int num2;

    cout<<"****Welcome to the Calculator Program !****"<<endl;
    cout<<"\tEnter an Operator: [ +, -, *, / ]:"<<endl;
    cin>>operation;
    cout<<"Enter two number: "<<endl;
    cin>>num1>>num2;

    switch(operation){
        case '+':
            cout<<"Result: "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Result: "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Result: "<<num1*num2<<endl;
            break;
        case '/':
            if(num2!=0){
            cout<<"Result: "<<num1/num2<<endl; 
            }
            else{
                cout<<"Error !, Division with zero is not allowed"<<endl;
            }
           break;
        default:
            cout<<"Invalid operator !";
            break;
            
    }



    return 0;
}