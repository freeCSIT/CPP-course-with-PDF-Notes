#include<iostream>
using namespace std;
 class Car{
    public:
    string brandName;
    string modelName;
    int mfgYear;
    Car(string bName,string mName,int mYear);  //construcro declaration

 };
    //constructor definition outside of the class
    Car::Car(string bName,string mName,int mYear){

        brandName=bName;
        modelName=mName;
        mfgYear =mYear;

        cout<<brandName<<endl<<modelName<<endl<<mYear<<endl;
    }


int main(){

        Car myDetails("BMW","X6",1997);



    return 0;
}