#include<iostream>
using namespace std;
class Copy{

    int myValue;

    public:
    Copy(int c): myValue(c){};
    Copy(const Copy &myObj){

        myValue= myObj.myValue;
        cout<<"Copy Constructor called !"<<endl;
    }

   };


int main(){

Copy ObjOne(10);
Copy ObjTwo = ObjOne; // copy constructor is called




    return 0;
}