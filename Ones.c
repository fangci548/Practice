#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>




int main(){
    long long int a,num = 11111111111111,ans = 0,h4gj4 = 14,i;
    //printf("%lld",num/10);
    while(scanf("%lld",&a) != EOF){
        num = 11111111111111;
        h4gj4 = 14;
        //printf("%d",a);
        for(i = 0;i < 14;i++){
            if(num % a == 0){
                ans = h4gj4;
            }
            //printf("i = %lld num = %lld h4gj4 = %lld\n ans = %lld",i,num,h4gj4,ans);
            num/=10;
            h4gj4--;
        }
        printf("%lld\n",ans);
//        if(11111111111111 % a == 0){
//            printf("14\n");
//        }
//        else if(1111111111111 % a == 0){
//            printf("13\n");
//        }
//        else if(111111111111 % a == 0){
//            printf("12\n");
//        }
//        else if(11111111111 % a == 0){
//            printf("11\n");
//        }
//        else if(1111111111 % a == 0){
//            printf("10\n");
//        }
//        else if(111111111 % a == 0){
//            printf("9\n");
//        }
//        else if(11111111 % a == 0){
//            printf("8\n");
//        }
//        else if(1111111 % a == 0){
//            printf("7\n");
//        }
//        else if(111111 % a == 0){
//            printf("6\n");
//        }
//        else if(11111 % a == 0){
//            printf("5\n");
//        }
//        else if(1111 % a == 0){
//            printf("4\n");
//        }
//        else if(111 % a == 0){
//            printf("3\n");
//        }
//        else if(11 % a == 0){
//            printf("2\n");
//        }
    }


}

