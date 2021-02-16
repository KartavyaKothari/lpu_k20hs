#include<bits/stdc++.h>
using namespace std;

void incre_by_val(int x){
    x++;
}

void incre_by_ref(int &a){
    a++;
}

void incre_by_add(int *a){
    (*a)++;
}

int main(){
    int x = 10;
    cout<<x<<endl;
    incre_by_add(&x);
    cout<<x<<endl;
}