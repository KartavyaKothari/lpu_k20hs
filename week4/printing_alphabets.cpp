#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[26];

    for(char i='A';i<='Z';i++){
        arr[i-'A'] = i-'A';
    }

    for(int i = 0 ; i < 26 ; i++){
        cout<<(char)('A'+*(arr+i));
    }
}