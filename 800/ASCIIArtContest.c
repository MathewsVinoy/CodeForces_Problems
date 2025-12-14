#include <stdio.h>

int main(){
    int g ,c,l,t=0;
    scanf("%d%d%d",&g,&c,&l);
    if(g<c){
        t=g;
        g=c;
        c=t;
    }
    if(g<l){
        t=g;
        g=l;
        l=t;
    }
    if(c<l){
        t=c;
        c=l;
        l=t;
    }

    if(g-l>=10){
        printf("check again");
    }else{
        printf("final %d",c);
    }
    return 0;
}
