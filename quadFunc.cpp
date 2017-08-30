//
// Created by infan_000 on 8/30/2017.
//
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){
    float a, b, c, d;
    cout<<"Enter a,b,c of ax^2 + bx + c";
    cin>>a>>b>>c;
    d = (pow(b, 2))-(4*a*c);
    if(d>=0){
        cout<<"Roots are: {"<<(-b+pow(d, 0.5))/(2*a)<<", "<<(-b-pow(d, 0.5))/(2*a)<<"}";
    }else if(d<0){
        d = -d;
        cout<<"Roots are: {"<<(-b/(2*a))<<" + "<<pow(d, 0.5)/(2*a)<<"i, "<<(-b/(2*a))<<" - "<<pow(d, 0.5)/(2*a)<<"i}";
    }
    getch();
    return 0;
}
