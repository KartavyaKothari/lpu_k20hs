#include<bits/stdc++.h>
using namespace std;

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
    }
}

int main(){
    int res;
    cin>>res;

    try{
        what_error(res);
    }catch(int e){
        cout<<"Int err"<<endl;
    }catch(const char * err){
        cout<<"Const char * err"<<endl;
    }catch(string s){
        cout<<"String err"<<endl;
    }catch(char e){
        cout<<"Char err"<<endl;
    }

    return 0;
}