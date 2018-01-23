//
// Created by infan_000 on 1/23/2018.
//
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
    int fact(int x);
    float x, n, ans = 1;
    int term = 3;
    cout<<"Enter 'x'";
    cin>>x;
    cout<<"Enter 'n'";
    cin>>n;
    for(int i = 1; i < n; i++){
        float id = 1;
        if(term % 2 != 0){
            id = -1;
        }
        ans += id*((pow(x,3*i))/(fact(3*i)));
        term += 3;
    }
    cout<<"Tis the answer"<<ans;
    return 0;
}
int fact(int x){
    int ans = 1;
    while(x>1) {
        ans *= x;
        x -= 1;
    }
    return ans;
}

