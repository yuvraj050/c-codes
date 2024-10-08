#include <iostream>
using namespace std;
int main(){
    int x = 5, y = 2;
    cout<<x+y<<endl; // 7
    cout<<x-y<<endl; // 3
    cout<<x*y<<endl; // 10
    cout<<x/y<<endl; // 2 instead of 2.5 due to int

    float a = 10, b = 3;
    cout<<a/b<<endl; //3.33 due to float
}