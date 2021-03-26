#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class Array{
    public:
    int arr[MAX];
    Array(){
        for(int i = 0 ; i < MAX ; i++) arr[i] = i+1;
    }

    friend Array operator +(Array &a, Array &b);
    friend void operator ++(Array &a);
    friend ostream& operator <<(ostream &out,Array &b);
};

Array operator +(Array &a, Array &b){
    Array res;
    for(int i = 0 ; i < MAX ; i++){
        res.arr[i] = a.arr[i]+b.arr[i];
    }

    return res;
}

void operator ++(Array &a){
    for(int i = 0 ; i < MAX ; i++){
        a.arr[i]++;
    }
}

ostream& operator <<(ostream &out, Array &b){
    for(int i = 0 ; i < MAX ; i++){
        out<<setw(3)<<b.arr[i]<<" ";
    }
    out<<endl;

    return out;
}

int main(){
    Array arr1;
    Array arr2;

    Array arr3 = arr1+arr2;
    cout<<arr3;

    ++arr1;
    cout<<arr1;

    return 0;
}