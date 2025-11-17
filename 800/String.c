#include <stdio.h>
#include <string.h>
int main(){
    char s[50];
    int t,i,j,c;
    scanf("%d",&t);
    for(i =0; i<t;i++){
        scanf("%s",s);
        c=0;
        for(j=0;j<strlen(s);j++)
            if(s[j]=='1')
                c++;
        printf("%d\n",c);
    }
    return 0;
}
