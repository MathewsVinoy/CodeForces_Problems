#include <stdio.h>

int main(){
    int i,j,t,a[100],n;
    scanf("%d",&t);
    while(t>0){
        int mex = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                    if(a[j]==mex)
                        mex++;

        printf("%d\n",mex);
        t--;
    }
    return 0;
}
