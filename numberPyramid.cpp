//
// Created by infan_000 on 1/23/2018.
//
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x = 1;
    for(int i = 1; i < 5; i++){
        for(int j = 0; j < i; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}