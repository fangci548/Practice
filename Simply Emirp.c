#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int i,j,fail = 0;
    char num[10];
    while(scanf("%s",num) != EOF){
        char tmp[10] = {0};
        fail = 0;
        if(atoi(num) == 2){
            printf("%s is prime.\n",num);
            fail = 1;
        }
        for(i = 2;i*i <= atoi(num);i++){
            if(atoi(num)%i == 0){
                printf("%s is not prime.\n",num);
                fail = 1;
                break;
            }
        }
        if(fail == 0){
                for(j = 0;j < strlen(num);j++){
                    tmp[j] = num[strlen(num)-1-j];
                }
                if(atoi(tmp) == atoi(num)){
                    printf("%s is prime.\n",num);
                    fail = 1;
                }
                //printf("%s %s­Ë",num,tmp);
                //tmp = (num % 10)*10 + (num % 10)*10 + (num % 10)*10 + (num % 10)*10 + (num % 10)*10 + (num / 10);
                for(j = 2;j*j <= atoi(tmp);j++){
                    if(atoi(tmp) % j == 0){
                        printf("%s is prime.\n",num);
                        fail = 1;
                        break;
                    }
                }
                if(fail == 0){
                    printf("%s is emirp.\n",num);
                }
                //break;
        }
    }

//    if(atoi(num) % 2 == 0 && atoi(num) != 2){
//        printf("%s is not prime.\n",num);
//    }
//    else{

}



