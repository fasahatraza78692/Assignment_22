#include<stdio.h>
int main()
{
	int n,*ar,i,min,sum=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	ar=(int*)malloc(n*sizeof(int));
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	 scanf("%d",&ar[i]);
	if(ar=='\0')
	 printf("Memory allocation failed\n");
	else
	  {
	  	for(i=0;i<n;i++)
	      sum=sum+ar[i];
	    printf("Sum = %d",sum);
	  }
	return 0;
}
