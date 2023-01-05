#include<stdio.h>
int main()
{
	int n,*ar,i;
	float sum=0;
	printf("How many data values you want to enter\n");
	scanf("%d",&n);
	ar=(int*)calloc(n,sizeof(int));
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	 scanf("%d",&ar[i]);
	for(i=0;i<n;i++)
	  sum=sum+ar[i];
	printf("Average = %.2f",sum/n);
	return 0;
}
