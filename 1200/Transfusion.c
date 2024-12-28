#include <stdio.h>

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		int a[10000],fcount=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<n-1;i++)
		{
			if(a[i-1]>a[i+1])
			{
				while((a[i-1]==a[i]&&a[i+1]==a[i])||a[i-1]<a[i+1])
				{
					a[i-1]--;
					a[i+1]++;
				}
			}
			printf("%d %d %d ",a[i-1],a[i],a[i+1]);
			if(a[i-1]==a[i])
				fcount+=1;
		}
		printf("fcount = %d",fcount);
		if(n==fcount)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
