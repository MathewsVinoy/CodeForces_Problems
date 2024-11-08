#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void make_numbers(int index,char num[],int *n,int temp,int limit){
    if(index==limit){
        int num1 = atoi(num);
        if(num1%33==0 && num1%66==0){           
            temp=num1;
            if(temp<*n){
                *n=temp;
            }
        }
        return;
    }
    num[index]='3';
    make_numbers(index+1,num,n,temp,limit);
    num[index]='6';
    make_numbers(index+1,num,n,temp,limit);
}

int main(){
    int size;
    scanf("%d",&size);
    for(int i=0; i<size;i++){
        int n=INT_MAX,temp=0,limit;
        scanf("%d",&limit);
        char num[limit];
        num[limit] = '\0';
        make_numbers(0,num,&n,temp,limit);
        if(n==INT_MAX){
            printf("-1\n");
        }else{
            printf("%d\n",n);
        }
    }
    return 0;
}

