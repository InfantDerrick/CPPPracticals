//
// Created by infan_000 on 8/31/2017.
//
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    float r;
    const float pi = 3.14159;
    cout<<"Input the radius of a given circle: ";
    cin>>r;
    cout<<"The area of the circle is: "<<(pi*r*r)<<endl<<"The circumference is: "<<2*pi*r;
    getch();
    return 0;
}


