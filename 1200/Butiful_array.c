#include <stdio.h>
int main(){
	int n1,n2,temp[500],sum=0;
	scanf("%d%d",&n1,&n2);
	if(n2<=0 && n1<=0)
		printf("1\n%d",n1);
	if(n2>0){
		printf("%d",n1);
		for(int i=0;i<n1-1;i++)
		{
			temp[i]=n1;
			sum+=temp[i];
		}
		int out = 
		printf("%d",temp);
	}
	return 0;
}
