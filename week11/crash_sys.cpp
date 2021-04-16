#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin>>a;
    
    try{
        char *arr = new char[a];
    }catch(const bad_alloc e){
        cout<<e.what()<<endl;
    }

    cout<<"Program is still continuing"<<endl;
}