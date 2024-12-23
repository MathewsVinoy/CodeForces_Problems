#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	char str[100000];
	while(t--){
		scanf("%s",&str);
		int sum=0,two=0,three=0,flag=0;
		for(int i=0;i<strlen(str);i++){
			if(str[i]=='2')
				two++;
			else if(str[i]=='3')
				three++;

			sum+=(str[i]-'0');
			sum%=9;
		}
		for(int i=0;i<=three;i++){
			for(int j=0;j<=two;j++){
				long tsum=sum;
				tsum+=j*2+i*6;
				if(tsum%9==0){
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
