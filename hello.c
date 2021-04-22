#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int b,num = 0,fail = 1,cas = 0;
    int a[10000] = {1,1,1,1},i;
    for(i = 1;i < 10000;i++){
        a[i] = a[i-1]*2;
    }

    while(fail = 1){
        num = 0;
        scanf("%d",&b);
        if(b < 0){
            fail = 0;
            break;
        }
        else{
            cas++;
            for(i = 0;i < b;i++){
                //printf("a = %d\n",a[i]);
                if(b > a[i]){
                    num = num+1;
                    //printf("if = %d ",num);
                }
                else{
                    break;
                }
            }
            printf("Case %d: %d\n",cas,num);
        }
    }


}
