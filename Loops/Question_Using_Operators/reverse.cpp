#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int rev = 0;
    while(n!=0){
        int ld = n%10; // last digit nikalo
        rev = rev*10;
        rev = rev+ld;
        n = n/10; // last digit hata diya

    }
    cout<<rev;
}