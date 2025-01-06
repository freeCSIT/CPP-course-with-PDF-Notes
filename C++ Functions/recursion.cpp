// 1+2+3+4+5+6+7+8+9+10=55
#include<iostream>
using namespace std;

int sum(int n){
    if(n>0){
        return n + sum(n-1);  // 10+ sum(9)
                            // 9 + 8
                            // 8+7
                               // n=0
    }
    else{
        return 0;
    }
}


int main(){

    int result = sum(150);
    cout<<result<<endl;
    
            
    return 0;

}