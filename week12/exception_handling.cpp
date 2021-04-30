#include<bits/stdc++.h>
using namespace std;

int main(){

    double a,b;
    cin>>a>>b;

    try{
        if(b==0){
            string ERR = "Divide by zero is not possible, or is it? ...";
            throw ERR;
            // throw "A string exception";
            // throw 21;
        }else{
            cout<<a/b<<endl;
        }
    }catch(string err){
        cout<<err<<endl;
    }

    cout<<"And the program executed happily ever after"<<endl;

    return 0;
}