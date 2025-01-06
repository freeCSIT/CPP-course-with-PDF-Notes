// default parameters
#include<iostream>
using namespace std;

    void myFunction(string country="India"){
        cout<<country<<endl;
    }

int main(){

    myFunction("Nepal");
    myFunction("Saudi Arabia");
    myFunction("USA");
    myFunction();


    return 0;
}