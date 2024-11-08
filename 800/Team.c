#include <stdio.h>
int main(){
    int size,team[3],count,flag=0;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        count=0;
        for(int j=0;j<3;j++){
            scanf("%d",&team[j]);
            if(team[j]==1){
                count++;
            }
        }
        if(count>=2){
            flag++;
        }
    }
    printf("%d",flag); 
    return 0;
}