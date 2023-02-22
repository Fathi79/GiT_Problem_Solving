#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    scanf("%d",&n);

    int r=log(n)/log(2);

    printf("%d",n-int(pow(2,r))+1);
}