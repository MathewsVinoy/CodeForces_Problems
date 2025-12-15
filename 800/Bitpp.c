#include <stdio.h>
#include <string.h>
int main(){
    int i,n,out=0;
    char opr[4];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",opr);
        if(strchr(opr,'+')!=NULL)
            out++;
        if(strchr(opr,'-')!=NULL)
            out--;
    }
    printf("%d",out);
    return 0;
}
