#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin>>a;
    
    char *arr = new(nothrow) char[a];
    if(arr!=NULL){
        cout<<"Memory is allocated"<<endl;
    }else{
        cout<<"Memory is not allocated"<<endl;
    }

    cout<<"Program is still continuing"<<endl;
}