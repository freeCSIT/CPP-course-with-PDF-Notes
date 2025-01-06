// default parameters
#include<iostream>
using namespace std;

    void myFunction(int myNumbers[6]){
        for( int i=0;i<6;i++){
            cout<<myNumbers[i]<<endl;
        }
    }


int main(){

   int myNumbers[6]={2,3,4,5,6,7};
   myFunction(myNumbers);



    return 0;
}