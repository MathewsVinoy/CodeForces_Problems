#include <stdio.h>
int main(){
    int array[2][2]={{-1,2},{3,0}},sum=0;
    for(int i=0;i<2;i++){    
        for(int j=0;j<2;j++){    
            if(array[i][j]<0){
                printf("%d",0-array[i][j]);
            }    
        } 
    }
}