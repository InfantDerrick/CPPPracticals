//
// Created by infan_000 on 8/31/2017.
//
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int a,fact =1;
    cout<<"Enter number: ";
    cin>>a;
    for(int i = 1; i<=a; i++){
        fact *=i;
    }
    cout<<fact<<" is the factorial of "<<a;
    getch();
    return 0;
}
