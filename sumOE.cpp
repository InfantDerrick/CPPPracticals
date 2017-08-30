//
// Created by infan_000 on 8/31/2017.
//
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    cout<<"To which term do you want the sequence to prolong?"<<endl;
    int n, e= 2, o = 1, sume = e, sumo = o;
    cin>>n;
    for(int i = 1; i<n; i++){
        e += 2;
        o += 2;
        sume += e;
        sumo += o;
    }
    cout<<"Sum of even digits: "<<sume<<endl<<"Sum of odd numbers: "<<sumo;
    getch();
    return 0;
}