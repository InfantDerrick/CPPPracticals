//
// Created by infan_000 on 1/23/2018.
//
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    clrsrc();
    int x, ans = 0;
    cout<<"Enter desired number";
    cin>>x;
    while(x>0){
        ans += x%10;
        x /= 10;
    }
    cout<<ans;
    getch();
    return 0;
}