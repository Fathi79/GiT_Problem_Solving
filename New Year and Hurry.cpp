#include<iostream>
using namespace std;
#define ll long long

int NewYearandHurry(int time, int p){

    if((5*((p)*(p+1)/2)<time)){
        return p;
    }


    int low=1,high=p;

    int mid;
    while (low<=high)
    {
        mid=(high+low)/2;
        if((5*(mid*(mid+1)/2)==time)){
            return mid;
        }else if ((5*(mid*(mid+1)/2)>time)) {
            high=mid-1;
            continue;
        }else {
            if((5*((mid+1)*(mid+2)/2)>time)){
                return mid;
            }else{
                low=mid+1;
            }
        }
    }
    
    return 0;
}




int main(){
    
    int k,n;
    cin>>n>>k;
    cout<<NewYearandHurry(4*60-k,n);

}