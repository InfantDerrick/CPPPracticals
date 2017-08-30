//
// Created by infan_000 on 8/31/2017.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    cout<<"Conversions"<<endl<<"1. Farenheit to Celcius"<<endl<<"2. Celcius to Farenheit"<<endl;
    int choice;
    cin>>choice;
    if(choice == 1){
        float f;
        cout<<"Enter Farenheit";
        cin>>f;
        cout<<"Celcius: "<<(f-32)*(5.0/9.0);
    }else if(choice == 2){
        float c;
        cout<<"Enter Celcius";
        cin>>c;
        cout<<"Farenheit: "<<(c*(9.0/5.0))+32;
    }else{
        cout<<"Invalid input";
    }
    getch();
    return 0;
}