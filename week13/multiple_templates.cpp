#include<bits/stdc++.h>
using namespace std;

template <class TYPE1, class TYPE2>
double max_a(TYPE1 a, TYPE2 b){
    return a>b?a:b;
}

int main(){
    cout<<max_a(10,11)<<endl;
    cout<<max_a(10.2,11.2)<<endl;
    cout<<max_a(11,11.2)<<endl;
    
    return 0;
}