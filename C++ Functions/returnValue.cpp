// default parameters
#include<iostream>
using namespace std;

//    int myFunction(int x){
//     return 10+x;      // return is a keyword used only when you declare function with datatype
//    }

int myFunction(int x,int y ){
    return x+y;
}

int main(){

   int x=5;
   int y=9;
    int z = myFunction(x,y);
   cout<<z;

    return 0;
}