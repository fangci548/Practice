#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int fail = 0,casename = 0;
    char hello[15],helloform[6][15] = {"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};

    while(fail == 0){
        scanf("%s",hello);
        if(hello[0] == '#'){
            fail = 1;
            break;
        }
        else{
            casename++;
            if(strstr(hello,helloform[0]) != NULL){
                printf("Case %d: ENGLISH\n",casename);
            }
            else if(strstr(hello,helloform[1]) != NULL){
                printf("Case %d: SPANISH\n",casename);
            }
            else if(strstr(hello,helloform[2]) != NULL){
                printf("Case %d: GERMAN\n",casename);
            }
            else if(strstr(hello,helloform[3]) != NULL){
                printf("Case %d: FRENCH\n",casename);
            }
            else if(strstr(hello,helloform[4]) != NULL){
                printf("Case %d: ITALIAN\n",casename);
            }
            else if(strstr(hello,helloform[5]) != NULL){
                printf("Case %d: RUSSIAN\n",casename);
            }
            else{
                printf("Case %d: UNKNOWN\n",casename);
            }
        }

    }

//    for(j = 0;j < strlen(hello);j++){
//        if(hello[j] == helloform[i][j]){
//            printf("ENG");
//        }
//    }


}
