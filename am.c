#include<stdio.h>


void main(){
	int  n,aj[50][50],c=0,i,j,oe[50],ie[50],iet[50],k;
	printf("\nEnter the number of nodes - ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		oe[i]=0;
		for(j=1;j<=n;j++){
			printf("\nIs there a releation between %d AND %d then press 1",i,j);
			scanf("%d",&c);
			if(c==1){
				aj[i][j]=1;
				oe[i]++;
				iet[j]=1;
			}
			else{
				aj[i][j]=0;
				iet[j]=0;
			}	
		}
		if(j==1){
			for(k=1;k<=n;k++){
				ie[k]=iet[k];
				printf("%d",ie[k]);
				}
		}
		if(j!=1){
			for(k=1;k<=n;k++){
				ie[k]=ie[k]+iet[k];
				printf("%d",ie[k]);
			}
		}
	}
	printf("\nAJ is   \n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf(" %d ",aj[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
	 	printf("outgoing edge of %d is %d \n",i,oe[i]);
	 	printf("incoming edge of %d is %d \n",i,ie[i]);
	 	printf("total dgree = %d\n\n",ie[i]+oe[i]);
	 	
	}
		
}
