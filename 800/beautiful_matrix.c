#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,c1,c2,a[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                c1= i;
                c2 =j;
            }
        }
    }
    int out = abs(c1-2)+abs(c2-2);
    printf("%d",out);
    return 0;
}
