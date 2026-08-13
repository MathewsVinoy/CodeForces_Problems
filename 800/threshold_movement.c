#include <stdio.h>

int main(){
    int n,t=1,w[100];
    for(int j=0;j<t;j++){
        scanf("%d",&n);
        for(int i =0; i<n;i++)
            scanf("%d",&w[i]);
        if(n==1){
            printf("NO");
            break;
        }
        int min =w[0], max=w[0];
        for(int i=0;i<n;i++){
            if(min>w[i])
                min = w[i];
            if(max<w[i])
                max = w[i];
        }
        if(min==max){
            printf("NO");
        }
        int out = min+max/2;
        int flag = 0;
        int l =0, r=0;
        for(int i=0;i<n;i++){
            if(w[i]==out){
                flag =1;     
                break;
            }
            else if(w[i]>out)
                r++;
            else
                l++;
        }
        if(flag==1){
            printf("NO");
            break;
        }
        if(l==r)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}

