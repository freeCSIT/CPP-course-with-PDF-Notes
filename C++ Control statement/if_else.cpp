#include<iostream>
using namespace std;

int main(){

    // int a=-40;

    // if(a>0){
    //     cout<<"The number is positive"<<endl;
    // }
    // else{
    //     cout<<"The number is negative"<<endl;
    // }

    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    if(number%2==0){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }


    return 0;
}