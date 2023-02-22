#include<iostream>
#include<map>

using namespace std;
int find(int start,char b, string s){
    for (; start < s.length(); start++){
        if(s[start]==b){
            return start+1;
        }
    }
    return -1;
}


int main(){
    map<char,int>m;
    string str;
    cin>>str;
    int i=0;

    i=find(i,'h',str);
    if(i==-1){
        cout<<"NO";
        return 0;
    }


    i=find(i,'e',str);
    if(i==-1){
        cout<<"NO";
        return 0;
    }

    i=find(i,'l',str);
    if(i==-1){
        cout<<"NO";
        return 0;
    }

    i=find(i,'l',str);
    if(i==-1){
        cout<<"NO";
        return 0;
    }

    i=find(i,'o',str);
    if(i==-1){
        cout<<"NO";
        return 0;
    }

    cout<<"YES";


    
}