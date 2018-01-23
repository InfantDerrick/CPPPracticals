//
// Created by infan_000 on 1/23/2018.
//
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,tempx, xr = 0;
    cout<<"Enter number";
    cin>>x;
    tempx = x;
    while(tempx>0){
        xr += tempx%10;
        tempx /=10;
        //cout<<tempx<<" "<<xr<<" ";
        xr *= 10;
    }
    xr /=10;
    if(xr == x){
        cout<<"Tis a palindrome";
    }else{
        cout<<"not a palindrome";
    }
    return 0;
}
