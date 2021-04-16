#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor called"<<endl;
    }
    ~A(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    // int *ab = new int[3];
    A *a = new A[30];
    // A a[3];
    cout<<"@"<<endl;
    delete[] a;
    return 0;
}