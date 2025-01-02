//Dynamic memory allocation (DMA) in pointer
#include<iostream>
using namespace std;

int main(){
    int *ptr= new int;  //dynamically allocate memory to an int 
    *ptr =20; // assign value to the allocated memory

    cout<<"value at ptr: "<<*ptr<<endl;

    delete ptr;
    ptr = nullptr;


    return 0;
}
