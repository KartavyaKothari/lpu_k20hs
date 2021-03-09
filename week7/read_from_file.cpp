#include<bits/stdc++.h>
using namespace std;

int main(){
    string names[20];
    int ages[20];

    fstream new_file;
    // ifstream new_file;
    new_file.open("outfile.kartavya",ios::in);

    if(!new_file){
        cout<<"Some error occured"<<endl;
    }else{
        // cout<<"File opened successfully"<<endl;
        
        for(int i = 0 ; i < 20 ; i++){
            new_file>>names[i]>>ages[i];

            // cout<<names[i];

            // if(ages[i]>=18){
            //     cout<<" is an adult";
            // }else cout<<" is not an adult";

            // (condition)? if conditon is true : if condition is false;

            // cout<<endl;
        }

        for(int i = 0 ; i < 20 ; i++){
            // new_file>>names[i]>>ages[i];

            cout<<names[i];

            if(ages[i]>=18){
                cout<<" is an adult";
            }else cout<<" is not an adult";

            // (condition)? if conditon is true : if condition is false;

            cout<<endl;
        }
        
        new_file.close();
    }

    return 0;
}