// Convert Celsius to Fahrenheit
#include<iostream>
using namespace std;

float toCelsius(float fahrenheit){
       return (fahrenheit -32.0)* (5.0/9.0); 

}

int main(){

    float f_value=98.7;

    float result = toCelsius(f_value);

    cout<<"Fahrenheit: "<<f_value<<endl;

    cout<<"Convert Fahrenheit to Celsius--Result: "<<result<<endl;



    return 0;
}