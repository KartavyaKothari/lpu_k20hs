#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream m_fle;
    m_fle.open("outfile.deep",ios::in|ios::out|ios::trunc);

    if(!m_fle)return 1;

    m_fle<<"Hello world";
    m_fle.seekg(7,ios::beg);

    string A;
    m_fle>>A;

    // char A[6];
    // m_fle.read(A,6);
    // A[5] = '\0';

    cout<<A;

    m_fle.close();

    return 0;
}