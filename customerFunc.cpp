//
// Created by infan_000 on 1/23/2018.
//
#include <iostream>
#include <conio.h>

using namespace std;

struct cust{
    long custCode;
    char custName[50];
    double consumed;
    double bill;
}customer;

int main(){
    double findBill(double x);
    cout<<"Enter Units Consumed: ";
    cin>>customer.consumed;
    customer.bill = findBill(customer.consumed);
    cout<<"Bill is: "<<customer.bill;
}
double findBill(double x){
    double bill = 0;
    if(x>1000){
        bill += 4*(x-1000);
        x = 1000;
    }
    if(x>600){
        bill += 3*(x-600);
        x = 600;
    }
    if(x>300){
        bill += 2*(x-300);
        x = 300;
    }
    if(x>100){
        bill += 1.2*(x-100);
        x = 100;
    }
    if(x>0){
        bill += 0.8*(x);
    }
    return bill;
}
