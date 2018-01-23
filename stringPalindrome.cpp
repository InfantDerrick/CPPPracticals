//
// Created by infan_000 on 1/23/2018.
//
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char x[50], revx[50];
    cout<<"Enter String";
    cin>>x;
    int strLen = strlen(x);
    for(int i = 0; i < strLen; i++){
        revx[i] = x[strLen-i-1];
        cout<<strcmp(revx, x);
    }
    if(!(bool)strcmp(revx, x)){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }

}