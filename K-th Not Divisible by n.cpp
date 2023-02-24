#include<iostream>
#include<vector>
#define ll long long
int KthNotDivisibleByN(ll n,ll k){
    ll x,y;
    if(k==1){
        return 1;
    }
    if(k%n==0){
        x=((k-1)/(n-1))*(n-1);
        y=((k-1)/(n-1))*n;
        return y+k-x;
    }
    else{
        x=(k/(n-1))*(n-1);
        y=(k/(n-1))*n;
        return y+k-x;
    }
}


int main(){

    int s;
    std::cin>>s;
    std::vector<std::pair<ll,ll>>v;
    for (int i = 0; i < s; i++)
    {
        std::pair<ll,ll>z;
        std::cin>>z.first>>z.second;
        v.push_back(z);
    }
    
    for (int i = 0; i < s-1; i++)
    {
        std::cout<<KthNotDivisibleByN(v[i].first,v[i].second)<<std::endl;
    }
    std::cout<<KthNotDivisibleByN(v[s-1].first,v[s-1].second);

}