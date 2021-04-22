#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int a = 0,b = 0,c = 0,d = 0,i,sum,j;
    char n[129];

    scanf("%d",&sum);

    for(j = 0;j < sum;j++){
        a = 0;b = 0;c = 0;d = 0;
        scanf("%s",n);

        for(i = 0;i < strlen(n);i++){
            if(n[i] == '('){
                a++;
            }
            else if(n[i] == ')'){
                b++;
            }
            else if(n[i] == '['){
                c++;
            }
            else{
                d++;
            }
        }
        //printf("%d %d %d %d  ",a,b,c,d);
        if(a == b && c == d){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }


}
