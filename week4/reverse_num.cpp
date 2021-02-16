#include<bits/stdc++.h>
using namespace std;

int REVERSE(int);

int main(){
    int n,a;
    cout<<"Enter number \n";
    cin>>n;
    a=REVERSE(n);
    cout<<"Reverse is \n"<<a;
    return 0;
}

x = 0
r = 3
d = 3

int REVERSE(int x){
    int r,d=0;
    r=x%10;
    d=(d*10)+r;
    REVERSE(x/10);
    return d;
}