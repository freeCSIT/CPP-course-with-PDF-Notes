//Pointer to function
#include<iostream>
using namespace std;
void printMessage(const char* message){
    cout<<message<<endl;
}

int main(){

        void(*functionPtr)(const char*)=&printMessage;
        functionPtr("Welcome Pointers !");

   

    return 0;
}
