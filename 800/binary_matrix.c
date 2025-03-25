#include <stdio.h>

int main(){
	int n,m,t,arr[100][100];
	scanf("%d",&t);
	while(t!=0){
		scanf("%d%d",&n,&m);
		for(int i =0; i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&arr[i][j]);
		t--;
	}
	printf("hello world!");
	return 0;
}
