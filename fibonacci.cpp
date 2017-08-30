//
// Created by infan_000 on 8/30/2017.
//
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int pres;
    long double fib = 1, j = 0;
    cout<<"To which degree of precision would you like the fibonacci series at: ";
    cin>>pres;
    cout<<j<<endl<<fib<<endl;
    for(int i = 2; i<pres; i++){
        fib += j;
        j = fib - j;
        cout<<fib<<endl;
    }
    getch();
    return 0;
}
