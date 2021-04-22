#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int abc[26] = {0};

int main(){
    char str[100];
    int n,i,j,tmp = 0,tmp1;

    scanf("%d\n",&n);
    for(i = 0;i < n;i++){
        gets(str);
        //printf("%s",str);
        for(j = 0;j < strlen(str);j++){
            if(str[j] > 64 && str[j] < 91){
                abc[str[j] - 65]++;
            }
            else if(str[j] > 96 && str[j] < 123){
                abc[str[j] - 97]++;
            }
        }
        //printf("%d",abc[0]);
    }
    for(i = 0;i < 26;i++){
        tmp += abc[i];
    }
    for(i = tmp;i > 0;i--){
        for(j = 65;j <= 90;j++){
            if(abc[j - 65] == i){
                printf("%c %d\n",j,abc[j - 65]);
            }
        }
    }
}

