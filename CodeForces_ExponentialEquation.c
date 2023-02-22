#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int ExpEq(int x,int y){
    return (pow(x,y)*y)+(pow(y,x)*x);
}

int main(){
    int t;
    scanf("%d",&t);
    int *p=(int*)malloc(t*sizeof(int));

    
    for (int i = 0; i < t; i++){
        scanf("%d",&p[i]);
    }
    
    for (int k = 0;k < t;k++){
    
        int n=p[k],f=0;
        
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                if(ExpEq(i,j)==n){
                    printf("%d %d\n",i,j);
                    f=1;
                    break;
                }
            }
            if(f==1){
                break;
            }
        }
        if(f==1){
            continue;;
        }
        printf("-1\n");
    }

}