#include<iostream>
#include"string.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    string* strs=new string[t];
    for(int i=0;i<t;i++){
        cin>>strs[i];
    }
    
    for(int i=0;i<t-1;i++){
        if(strs[i].length()<=10){
            cout<<strs[i]<<endl;
            continue;
        }
        cout<<strs[i][0]<<strs[i].length()-2<<strs[i][strs[i].length()-1]<<endl;
    }
    if(strs[t-1].length()<10){
        cout<<strs[t-1]<<endl;
    }
    else{
        cout<<strs[t-1][0]<<strs[t-1].length()-2<<strs[t-1][strs[t-1].length()-1]<<endl;
    }
}