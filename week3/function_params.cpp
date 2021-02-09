#include<bits/stdc++.h>
using namespace std;

void sum(int a, int b = 0, int c = 0){
    cout<<a<<" + "<<b<<" + "<<c<<" = ";
    cout<< a+b+c;
}

int main(){
    sum(10,30,23);cout<<endl;
    sum(10,13);cout<<endl;
    sum(12);cout<<endl;
    return 0;
}