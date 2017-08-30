#include <iostream>
#include <conio.h>
    using namespace std;
int main() {
    double a, b, c, gt, cond = 0;
    cout<<"Enter three numbers: a,b,c" << endl;
    cin>>a>>b>>c;
    if(a>b && b>c){
        gt = a;
    }else if(b>a && b>c) {
        gt = b;
    }else if(c>a && c>b){
        gt = c;
    }else{
        cond = 1;
    }
    if(cond == 0){
        cout<<gt<<" is the greatest number";
    }else if (cond == 1) {
        if(a == b && a==c) {
            gt = a;
            cout << "All the numbers are equal " << gt;
        }else if(a==b && a!=c){
            gt = a;
            cout <<"a and b are equal at "<<gt<<" being the greatest";
        }else if(a==c && a!=b){
            gt = a;
            cout <<"a and c are equal at "<<gt<<" being the greatest";
        }else if(b==c && b!=a){
            gt = b;
            cout <<"b and c are equal at "<<gt<<" being the greatest";
        }
    }else{
        cout<<"How the Fu....";
    }
    getch();
    return 0;
}