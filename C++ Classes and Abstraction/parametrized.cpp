#include<iostream>
using namespace std;
class Rectangle{
    private:
    int width,height;

    public:
    Rectangle(int w, int h){   //constructor
        width=w;
        height=h;
        cout<<"The Area of Rectangle is: "<<width*height<<endl;
    }
};

int main(){

    Rectangle myRectngle(10,5);

    return 0;
}