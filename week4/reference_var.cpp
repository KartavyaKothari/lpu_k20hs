#include<bits/stdc++.h>
using namespace std;

// void func(int &a)

int main(){
    int y = 100;
    int x = 10;
    int &a = x;

    cout<<x<<" "<<a<<endl;
    x++;
    cout<<x<<" "<<a<<endl;
    a++;
    cout<<x<<" "<<a<<endl;

    a = y;

    cout<<x<<" "<<a<<endl;
    y++;
    cout<<x<<" "<<a<<endl;
}