#include <stdio.h>

int main(){
    int i,k,n,a[100],count =0;
    scanf("%d %d",&n, &k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        if(a[i]!=0 && a[k-1]<=a[i])
            count++;
    printf("%d",count);
    return 0;
}
