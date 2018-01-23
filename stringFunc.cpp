//
// Created by infan_000 on 1/23/2018.
//
#include<iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char x[50], y[50];
    cout<<"Enter x and y respectively";
    cin>>x;
    cin>>y;
    char tempx[50];
    strcpy(tempx, x);
    char tempy[50];
    strcpy(tempy, y);
    cout<<"strlen of x: "<<strlen(x)<<" strlen of y: "<<strlen(y)<<endl;
    strcpy(tempx, tempy);
    cout<<"strcpy x->y: "<<strcpy(tempy, tempx);
    strcpy(tempy, y);
    strcpy(tempx, x);
    cout<<" strcpy y->x: "<<strcpy(tempy,tempx)<<endl;
    strcpy(tempy, y);
    strcpy(tempx, x);
    cout<<"strcat x->y: "<<strcat(tempx, tempy);
    strcpy(tempy, y);
    strcpy(tempx, x);
    cout<<" strcat y->x: "<<strcat(tempy,tempx)<<endl;
    strcpy(tempy, y);
    strcpy(tempx, x);
    cout<<"strcmp: "<<strcmp(tempx, tempy);
    return 0;
}
