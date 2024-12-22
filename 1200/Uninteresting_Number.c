#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int n,t;
	char str[100],temp[100],c;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int flag=1;
		scanf("%s",&str);
		if((atoi(str)%9)==0)
			flag=0;
		strcpy(temp,str);
		for(int j=0;j<strlen(str);j++){
			strcpy(temp,str);
			for(int k=0;k<strlen(str);k++){
				if(j!=k){
					int num1=temp[k]-'0';
					if(num1<=3){
						int prod=num1*num1;
						temp[k] = prod+'0';
						if((atoi(temp)%9)==0){
							flag=0;
							break;
						}
					}
				}
			}
		}
		for(int j=0;j<strlen(str);j++){
			strcpy(temp,str);
            int num1=temp[j]-'0';
				if(num1<=3){
					int prod=num1*num1;
					temp[j] = prod+'0';
					if((atoi(temp)%9)==0){
						flag=0;
						break;
					}
				}
			for(int k=0;k<strlen(str);k++){
				int num1=temp[k]-'0';
				if(num1<=3){
					int prod=num1*num1;
					temp[k] = prod+'0';
					if((atoi(temp)%9)==0){
						flag=0;
						break;
					}
				}
			}
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("No\n");
	}
	return 0;
}
