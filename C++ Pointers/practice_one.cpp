//pointer declaration 
#include<iostream>
using namespace std;

int main(){

    int num=10;   //variable declaration 
    int*ptr= &num;   // pointer stores the address of num variable

    cout<<"Value of num: "<<num<<endl;
    cout<<"Address of num: "<<&num<<endl;
    cout<<"The address of ptr: "<<&ptr<<endl;
        cout<<"The value of ptr "<<ptr<<endl;
     cout<<"The value at ptr "<<*ptr<<endl;




    return 0;
}
