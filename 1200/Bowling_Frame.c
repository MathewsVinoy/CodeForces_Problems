#include<stdio.h>

int main(){
	int t,w,b,sum=0;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		int i=1,temp=0;
		scanf("%d%d",&w,&b);
		sum=w+b;
		while(temp<sum){
			temp=temp+i;
			i++;
		}
		i--;
		if(sum<temp){
			temp=temp-i;
			i--;
		}
		printf("%d\n",i);
	}
	return 0;
}
