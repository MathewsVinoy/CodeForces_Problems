#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s1[100],s2[100];
    scanf("%s%s",s1,s2);
    int i,c1=0,c2=0;
    for(i=0;i<strlen(s1);i++)
        c1=c1+(int)tolower(s1[i]);
    for(i=0;i<strlen(s2);i++)
        c2=c2+(int)tolower(s2[i]);
    printf("c1 -> %d, c2 -> %d",c1,c2);
    if(c1<c2)
        printf("-1");
    else if(c2==c1)
        printf("0");
    else
        printf("1");
    return 0;
}
