#include<stdio.h>
int main(){
    int t,i,j, n, a[20];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        int max=0;
        for(j=0;j<n;j++)
            if(max<a[j])
                max = a[j];
        printf("%d\n",max);
    }
    return 0;
}
