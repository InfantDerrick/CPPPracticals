//
// Created by infan_000 on 8/31/2017.
//
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float score;
    cout<<"What marks did you get?"<<endl;
    cin>>score;
    if(score >= 90){
        cout<<"You got an A++!";
    }else if(score >=80 && score <90) {
        cout << "You got an A+!";
    }else if(score >=75 && score<80){
        cout<<"You got an A!";
    }else if(score >=60 && score<75){
        cout<<"You got a B";
    }else if(score >=50 && score<60) {
        cout << "You got a C.";
    }else if(score >=40 && score<50){
        cout<<"You got a? D.";
    }else{
        cout<<"You failed...";
    }
    getch();
    return 0;
}
