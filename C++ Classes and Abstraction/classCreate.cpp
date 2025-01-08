#include<iostream>
using namespace std;

class myClass{    // class creation
    public:
    // int myNumber;
    // string myName;

    // void myFunction(){
    //     cout<<"Welcome to OOP !"<<endl;
    // }
    // int sumNum(int a, int b){
    //     return a+b;
    // }

    void myFunction();  // inside method/function
    
};

void myClass::myFunction(){   // definition outside of the class  ,  scope resolution operator ::
        cout<<"Welcome to OOPs coding part !"<<endl;
    }

int main(){

        myClass myObject;  // object create of myClass

        // // Access attribute and set value 
        // myObject.myNumber =7;
        // myObject.myName ="Santosh";

        // //print attribute values

        // cout<<myObject.myNumber<<endl;
        // cout<<myObject.myName<<endl;
        // myObject.myFunction();

        // cout<<myObject.sumNum(4,9);

        myObject.myFunction();


    return 0;
}