#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(){
    char a,string[1000000],i = 0,j;
    int yn = 0;
    while( gets(string) != NULL){
    //printf("%s",string);

        for(i = 0;i < strlen(string);i++){
            if(string[i] == '"' && yn % 2 == 0){
                yn++;
                printf("``");
            }
            else if(string[i] == '"' && yn % 2 == 1){
                yn++;
                printf("''");
            }
            else{
                printf("%c",string[i]);
            }
        }
        printf("\n");
    }
}
