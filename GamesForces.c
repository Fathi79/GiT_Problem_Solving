#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){



    int t;
    scanf("%d",&t);
      

    int *output=(int*)malloc(t*sizeof(int));
    

    for (int j = 0; j < t; j++){
    
    
        int n, OnesCount=0;     
        scanf("%d",&n);

        int *p=(int*)malloc(n*sizeof(int));

        for(int i=0;i<n;i++){
            scanf("%d",&p[i]);
            if(p[i]==1){
                OnesCount++;
            }
        }
        OnesCount/=2;
        output[j]=n-OnesCount;
        free(p);
    }

   
    for (int k = 0; k< t-1; k++) {
        printf("%d\n",output[k]);
    }
    printf("%d",output[t-1]);

    free(output);
    

}