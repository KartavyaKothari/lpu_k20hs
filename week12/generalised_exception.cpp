#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    string err;
    int code;
    A(string e, int c){
        err = e;
        code = c;
    }
};

void what_error(int res){
    string s;
    switch(res){
        case 0:
            throw 12;
        case 1:
            throw "Str err";
        case 2:
            s = "Hello";
            throw s;
        case 3:
            throw 'a';
        case 4:
            throw A("hELLO",12);
    }
}

int main(){
    int res;
    cin>>res;

    try{
        what_error(res);
    }catch(...){
        cout<<"Some err"<<endl;
    }

    return 0;
}