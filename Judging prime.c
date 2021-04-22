#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>




int main(){

    int i,j,fail = 0,num;
    while(scanf("%d",&num) != EOF){
        fail = 0;
        for(i = 2;i*i <= num;i++){
            if(num%i == 0){
                printf("Not prime\n");
                fail = 1;
                break;
            }
        }
        if(fail == 0){
            printf("Prime\n");
        }

    }

}

