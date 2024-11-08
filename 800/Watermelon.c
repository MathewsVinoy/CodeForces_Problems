#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    if(input%2==0&& input != 2){
        printf("Yes");
    }else{
        printf("NO");
    }
    return 0;
}