//
// Created by infan_000 on 1/23/2018.
//
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
    int x, tempx, y = 0;
    cout<<"Enter number";
    cin>>x;
    tempx = x;
    while(tempx>0){
        y += pow((tempx%10),3);
        tempx /= 10;
    }
    if(y == x){
        cout<<"Tis armstrong";
    }else{
        cout<<"tis not";
    }
    return 0;
}