#include<bits/stdc++.h>
using namespace std;

struct CN{
    int r;
    int c;
};

struct CN add(struct CN a , struct CN b){
    struct CN res = {a.r+b.r,a.c+b.c};
    return res;
}

struct CN sub(struct CN a , struct CN b){
    struct CN res = {a.r-b.r,a.c-b.c};
    return res;
}

struct CN mul(struct CN a , struct CN b){
    struct CN res = {a.r*b.r-a.c*b.c,a.r*b.c+a.c*b.r};
    return res;
}

void display(struct CN a){
    cout<<a.r<<"+ "<<a.c<<"i"<<endl;
}

int main(){

    struct CN a = {1,2};
    //1+2i
    struct CN b = {3,4};
    //3+4i

    // add(a,b)
    // a+b

    return 0;
}