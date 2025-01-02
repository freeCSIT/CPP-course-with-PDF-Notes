//Pointer  and array
#include<iostream>
using namespace std;

int main(){

    int arr[]= {1,2,3,4,5};
    int *ptr =arr; // 

    for(int i =0;i<5;i++){
        cout<<"Value at arr["<<i<<"]:"<<(*ptr+i)<<endl;
    }


    return 0;
}
