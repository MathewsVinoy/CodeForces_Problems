#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int out = m*n;
    if(out%2==0)
        printf("%d",out/2);
    else
        printf("%d",(out-1)/2);

    return 0;
}
