//
// Created by infan_000 on 1/23/2018.
//
#include <iostream>
#include <conio.h>

using namespace std;

void printAll(int x[], int n){
    for(int i = 0; i < n+1; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl<<x[0]<<" | "<<x[n];
}

int main(){
    int part(int x[], int y, int z);
    void quicksort(int x[], int y, int z);
    int x[50], n;
    cout<<"enter n";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"x["<<i<<"] ";
        cin>>x[i];
    }
    quicksort(x, 0, n);
    printAll(x, n-1);
}
int part(int x[], int y, int z){
    int i = y, j = z;
    int temp;
    int focus = x[(y+z)/2];
    while(i <= j){
        while (x[i]<focus){
            i++;
        }
        while(x[j]>focus){
            j--;
        }
        if(i<=j){
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}
void quicksort(int x[], int y, int z){
    int i = part(x, y, z);
    if(y<i-1){
        quicksort(x, y, i-1);
    }
    if(i < z){
        quicksort(x,i,z);
    }

}
