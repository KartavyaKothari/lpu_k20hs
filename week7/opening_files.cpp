#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream new_file;
    new_file.open("outfile.kartavya",ios::out);

    if(!new_file){
        cout<<"Some error occured"<<endl;
    }else{
        cout<<"File opneded successfully"<<endl;
        new_file.close();
    }

    return 0;
}