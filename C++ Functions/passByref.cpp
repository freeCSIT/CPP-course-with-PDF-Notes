// Pass by Reference &
#include<iostream>
using namespace std;

void swapNum(int &x,int &y){
    int temp=x;     //temp =11
    x=y;            // x = 34 
    y=temp;        // y= 11

}

int main(){

    int fNumber=11;
    int sNumber =34;

        cout<<"Before Swapping:"<<endl;
        cout<<fNumber<<endl;
        cout<<sNumber<<endl; 

        swapNum(fNumber,sNumber); // call function
        cout<<"After Swapping:"<<endl;
        cout<<fNumber<<endl;
        cout<<sNumber<<endl;
 

    return 0;
}