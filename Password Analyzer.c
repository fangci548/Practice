#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int i,small = 0,big = 0,number = 0,strong = 0,eng = 0;
    char pass[31];


    while(scanf("%s",pass) != EOF){
        eng = 0;small = 0;big = 0;number = 0;strong = 0;
        for(i = 0;i < strlen(pass);i++){
            if((pass[i] > 64 && pass[i] < 91) || (pass[i] > 96 && pass[i] < 123) ){
                eng = 1;
                if((pass[i] > 96 && pass[i] < 123)) small = 1;
                else big = 1;
            }
            else{
                number = 1;
            }
        }

        if(strlen(pass) > 7) strong++;
        if((small == 1) && (big == 1) ) strong++;
        if((number == 1) && (eng == 1))strong++;

        if(strong == 3){
            printf("This password is STRONG\n");
        }
        else if(strong == 2){
            printf("This password is GOOD\n");
        }
        else if (strong == 1){
            printf("This password is ACCEPTABLE\n");
        }
        else{
            printf("This password is WEAK\n");
        }
    }



}

