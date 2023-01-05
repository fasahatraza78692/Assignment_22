#include<stdio.h>
int main()
{
	int n,*ar,i,sum=0;
	printf("How many values you want to enter\n");
	scanf("%d",&n);
	ar=(int*)malloc(n*sizeof(int));
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	 scanf("%d",&ar[i]);
	for(i=0;i<n;i++)
	  sum=sum+ar[i];
	printf("Sum = %d",sum);
	free(ar);
	return 0;
}
