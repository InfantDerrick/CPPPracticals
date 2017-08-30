//
// Created by infan_000 on 8/31/2017.
//
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int x, i;
    cout<<"Enter Number: ";
    cin>>x;
    for(int i = 2; i<x; i++){
        if(x%i == 0){
            cout<<x<<" is not a prime number";
            i = -1;
            break;
        }
    }
    if(x == 1 || x == 0){
        cout<<x<<" is neither prime nor composite";
    }else if(i!=-1 || x == 2){
        cout<<x<<" is a prime number";
    }
    getch();
    return 0;
}