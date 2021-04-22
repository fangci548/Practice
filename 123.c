#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int wordlong(char a[6]){
    int lo,i;
    for(i = 0;i < 7;i++){
        if(a[i] == '\0'){
            lo = i;
            return lo;
            break;
        }

    }
}

int threeword(char a[10]){
    int i,one = 0,two = 0,ten = 0,six = 0;

    for(i = 0;i < 1;i++){
        if(a[0] == 'o')
            one++;
        if(a[1] == 'n')
            one++;
        if(a[2] == 'e')
            one++;
    }

    for(i = 0;i < 1;i++){
        if(a[0] == 't')
            two++;
        if(a[1] == 'w')
            two++;
        if(a[2] == 'o')
            two++;
    }

    for(i = 0;i < 1;i++){
        if(a[0] == 's')
            six++;
        if(a[1] == 'i')
            six++;
        if(a[2] == 'x')
            six++;
    }

    for(i = 0;i < 1;i++){
        if(a[0] == 't')
            ten++;
        if(a[1] == 'e')
            ten++;
        if(a[2] == 'n')
            ten++;
    }
    if(one == 2||one == 3)return 1;
    else if(two == 2||two == 3)return 2;
    else if(six == 2||six == 3)return 6;
    else if(ten == 2||ten == 3)return 10;

}

int fourword(char a[10]){
    int i,four = 0,five = 0,nine = 0;

    for(i = 0;i < 1;i++){
        if(a[0] == 'f')
            four++;
        if(a[1] == 'o')
            four++;
        if(a[2] == 'u')
            four++;
        if(a[3] == 'r')
            four++;
    }

    for(i = 0;i < 1;i++){
        if(a[0] == 'f')
            five++;
        if(a[1] == 'i')
            five++;
        if(a[2] == 'v')
            five++;
        if(a[3] == 'e')
            five++;
    }

    for(i = 0;i < 1;i++){
        if(a[0] == 'n')
            nine++;
        if(a[1] == 'i')
            nine++;
        if(a[2] == 'n')
            nine++;
        if(a[3] == 'e')
            nine++;
    }

    if(four == 4||four == 3)return 4;
    else if(five == 4||five == 3)return 5;
    else if(nine == 4||nine == 3)return 9;
}

int fiveword(char a[10]){
    int i,three = 0,seven = 0,eight = 0;

    for(i = 0;i < 1;i++){
        if(a[0] == 't')
            three++;
        if(a[1] == 'h')
            three++;
        if(a[2] == 'r')
            three++;
        if(a[3] == 'e')
            three++;
        if(a[4] == 'e')
            three++;
    }

    for(i = 0;i < 1;i++){
        if(a[0] == 's')
            seven++;
        if(a[1] == 'e')
            seven++;
        if(a[2] == 'v')
            seven++;
        if(a[3] == 'e')
            seven++;
        if(a[4] == 'n')
            seven++;
    }

    for(i = 0;i < 1;i++){
        if(a[0] == 'e')
            eight++;
        if(a[1] == 'i')
            eight++;
        if(a[2] == 'g')
            eight++;
        if(a[3] == 'h')
            eight++;
        if(a[4] == 't')
            eight++;
    }

    if(three == 4||three == 5)return 3;
    else if(seven == 4||seven == 5)return 7;
    else if(eight == 4||eight == 5)return 8;
}


int main(){
    int n,a,ans,i;
    char num[10];

    //printf("%d",a);
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%s",num);
        a = wordlong(num);
        if(a == 3){
            ans = threeword(num);
            printf("%d\n",ans);
        }

        else if(a == 4){
            ans = fourword(num);
            printf("%d\n",ans);
        }

        else if(a == 5){
            ans = fiveword(num);
            printf("%d\n",ans);
        }

    }



}
