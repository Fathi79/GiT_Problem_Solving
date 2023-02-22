#include<iostream>
using namespace std;
int main(){
    string str;

    cin>>str;
    int Z=0 ,O=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='0'){
            O=0;
            Z++;
        }else{
            O++;
            Z=0;
        }
        if(O==7||Z==7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}