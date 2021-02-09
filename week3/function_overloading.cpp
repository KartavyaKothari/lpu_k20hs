#include<bits/stdc++.h>
using namespace std;

// double max(double a, double b){
//     // (condition) ? (true) : (false) ;
//     // if( condiiton ) true; false ;
//     return a>b ? a : b;
// }

// int max(int a, int b){
//     return a>b?a:b;
// }

int max(int a, int b, int c){
    return max(max(a,b),c);
}

int max(int a, int b, int c, int d){
    // return max(max(a,b,c),d);
    return max(max(a,b),max(c,d));
}

int max(int a, int b, int c, int d, int e){
    return max(max(a,b,c),max(d,e));
}

int main(){
    cout<<max(12.3,1.3)<<endl;
    cout<<max(12,1)<<endl;
    cout<<max(1,2,3,4)<<endl;
    cout<<max(10,20,30)<<endl;

    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0 ; i < n ; i++) cin>>arr[i];
    // int max_num = -1;
    // for(int i = 0 ; i < n ; i++) if(arr[i]>max_num) max_num = arr[i];
    // cout<<max_num;

    return 0;
}