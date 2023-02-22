#include <stdio.h>
#include <math.h>


int ExpEq(int x,int y){
    return (pow(x,y)*y)+(pow(y,x)*x);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",n);
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                if(ExpEq(i,j)==n){
                    printf("%d %d",i,j);
                }
            }
        }
        printf("-1");
    }
}