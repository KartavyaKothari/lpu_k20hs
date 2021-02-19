#include<bits/stdc++.h>
using namespace std;

int main(){
    int var = 10;
    // int a = 100;
    // uninitialized or wild pointer
    int *ptr;
    // to fix it, initiazalke value to something

    // NULL pointer
    // int *ptr2 = NULL;
    int *ptr2 = nullptr;

    cout<<*ptr;

    return 0;
}