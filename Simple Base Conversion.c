#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>




int main(){
    int i,l,fail = 0;
    char num[100],tmp[100];

    do{
        fail = 0;
        scanf("%s",num);
        if(atoi(num) < 0){
            fail = 1;
        }
        else{
            fail = 0;
            if(num[0] != '0'){
                printf("0x%X\n",atoi(num));
            }
            else{
                l = strtol(num,NULL,16);//strtol(�r��,���X�Ӫ��ѤU�r��s����m,�i��)
                //printf("%s",num);
                printf("%d\n",l);
            }
        }

    }while(fail == 0);

}

