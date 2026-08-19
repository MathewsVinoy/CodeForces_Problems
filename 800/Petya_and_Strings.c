#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s1[100],s2[100];
    scanf("%s%s",s1,s2);
    int i,flag=0;
    for(i=0;i<strlen(s1);i++){
        if(tolower(s1[i])>tolower(s2[i])){
            printf("1");
            flag=1;
            break;
        }
        if(tolower(s1[i])<tolower(s2[i])){
            printf("-1");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("0");
    return 0;
}
