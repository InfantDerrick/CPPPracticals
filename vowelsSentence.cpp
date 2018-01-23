//
// Created by infan_000 on 1/23/2018.
//
#include<iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char x[100];
    int vowels = 0;
    cout<<"Enter the sentence:"<<endl;
    cin.getline(x, 100);
    for(int i = 0; i < strlen(x); i++){
        if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U'){
            vowels++;
        }
    }
    cout<<"Vowels: "<<vowels;
}
