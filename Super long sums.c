#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int sum[1000001] = {0};

int main(){
    int i,a,b,k,n,j,timee;
    scanf("%d",&timee);
    for(j = 0;j < timee;j++){
        for(i = 0;i <= 1000001;i++){
            sum[i] = 0;
        }
        scanf("%d",&k);
        for(i = 1;i <= k;i++){
            scanf("%d %d",&a,&b);
            sum[i] = a+b;
            //printf("%d\n",sum[i]);
        }
        for(i = k;i >= 0;i--){
            if(sum[i] > 9){
                sum[i-1] += sum[i]/10;
                sum[i] = sum[i]%10;
            }
            //printf("%d\n",sum[i]);
        }
        if(sum[0] == 0){
            n = 1;
        }
        else{
            n = 0;
        }
        for(i = n;i <= k;i++){
            printf("%d",sum[i]);
        }
        printf("\n\n");
    }

}

