#include <stdio.h>

int main(){
    int size,num;
    scanf("%d",&size);
    for(int j=0; j<size;j++){
        scanf("%d",&num);
        char numch[num];
        if(num%2==0){
            for (int i=0;i<num-2;i++){
                numch[i]='3';
            }
            numch[num-2]='6';
            numch[num-1]='6';
            numch[num]='\0';
            printf("%s\n",numch);
        }else{
            if(num>4){
                for (int i=0;i<num-4;i++){
                    numch[i]='3';
                }
                numch[num-4]='6';
                numch[num-3]='3';
                numch[num-2]='6';
                numch[num-1]='6';
                numch[num]='\0';
                printf("%s\n",numch);
            }else
                printf("-1\n");
        }
    }
    return 0;
}