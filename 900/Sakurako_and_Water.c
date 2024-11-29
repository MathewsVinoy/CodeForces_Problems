#include <stdio.h>

int main(){
    int n,size,sum=0,temp=0,array[500][500];
	scanf("%d",&size);
	for(int k=0;k<size;k++){
		sum=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&array[i][j]);

		for(int i=0;i<n;i++){
			if (array[i][i]<temp && array[i][i]<0)
				temp=array[i][i];
			}
			sum+=(-temp);
			temp=0;
		for(int i=1;i<n;i++){
			for(int j=0;j<n-i;j++)
			if(array[j][j+i]<temp && array[j][j+i]<0)
				temp=array[j][j+i];
			sum+=(-temp);
			temp=0;
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<n-i;j++)
				if(array[j+i][j]<temp && array[j+i][j]<0)
					temp=array[j+i][j];
			sum+=(-temp);
			temp=0;}
		printf("%d\n",sum);
	}
	return 0;
}
