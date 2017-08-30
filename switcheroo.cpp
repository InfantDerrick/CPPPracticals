//
// Created by infan_000 on 8/31/2017.
//
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int a, b;
    cout<<"Enter a and b"<<endl;
    cin>>a>> b;
    b = a-b;
    a = a-b;
    b = a+b;
    cout<<a<<endl<<b;
    getch();
    return 0;
}