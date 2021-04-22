#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int a,b,fail = 0;
    while(fail == 0){
        scanf("%d %d",&a,&b);
        if(a == -1){
            fail = 1;
            break;
        }
        else{
            if(a < b){
                if((b - a) > 50){
                    printf("%d\n",(100-b)+a);
                }
                else{
                    printf("%d\n",b-a);
                }
            }
            else{
                if((a - b) > 50){
                    printf("%d\n",(100-a)+b);
                }
                else{
                    printf("%d\n",a-b);
                }
            }

        }

    }



}
