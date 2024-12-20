#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int n,t;
	char str[256];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int flag=1;
		scanf("%s",&str);
		for(int j=0;j<strlen(str);j++){
			int num=str[i]-'0';
			if(num<=3){
				str[i]=num*num;
				if((atoi(str)%9!=0))
					flag=0;
			}
		}
		if(flag==1)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}
