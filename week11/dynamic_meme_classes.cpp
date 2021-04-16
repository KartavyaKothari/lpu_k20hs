#include<bits/stdc++.h>
using namespace std;

class Stud{
    public:
    Stud(){
        cout<<"C"<<endl;
    }
    ~Stud(){
        cout<<"D"<<endl;
    }
};

int main(){
    int *a = new int;
    delete a;

    Stud *s = new Stud[5];
    delete []s;
    cout<<endl;
    return 0;
}