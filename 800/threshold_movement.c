#include <stdio.h>

int main() {
    int a,i;
    scanf("%d", &a);
    while(a--) {
        int  n;
        int w[100];
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &w[i]);
        }

        if (n % 2 != 0) {
            printf("NO\n");
            continue;
        }
        int maxEven =w[1] , minodd =w[0];
        for(i=0;i<n;i++){
            if(i%2==0){
                if(w[i]<minodd){
                    minodd=w[i];
                }
            }else{
                if(w[i]>maxEven){
                    maxEven=w[i];
                }
            }
        }
        if(maxEven+1<minodd){
            printf("YES\n");
        }else{
            printf("NO\n"); }
    
    }
    return 0;
}
