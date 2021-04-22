#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int num,sum = 0,fail = 0;

    while(fail == 0){
        scanf("%d",&num);
        if(num == 0){
            fail = 1;
        }
        else{
            do{
                sum = 0;
                do{
                    sum += num%10;
                    num = num/10;
                }while(num != 0);
                sum += num%10;
                num = sum;
            }while(sum > 9);


            printf("%d\n",sum);
        }
    }
}



