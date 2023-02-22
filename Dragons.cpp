#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    int s , n;

    vector<pair<int,int>> v;
    
    cin>> s>>n;
    pair<int,int> p;

    for (size_t i = 0; i < n; i++){
        cin>>p.first>>p.second;
        v.push_back(p);
    }
    
    sort(v.begin(),v.end());


    for(int x=0;x<n;x++){
       //cout<<v[x].first<<" "<<v[x].second<<endl;
        if(s<=v[x].first){
            cout<<"NO";
            return 0;
        }
        s+=v[x].second;
    }   
    cout<<"YES";



}