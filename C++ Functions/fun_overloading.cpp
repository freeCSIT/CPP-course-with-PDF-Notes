// function overloading
#include<iostream>
using namespace std;

int addNum(int a, int b){
    return a+b;
}
float addNum(float a, float b){
    return a+b;
}
double addNum(double a, double b){
    return a+b;
}

int main(){

    int sumInt= addNum(4,5);
    float sumFloat =addNum(4.5,6.7);

    cout<<sumInt<<endl;
    cout<<sumFloat<<endl;
 

    return 0;
}