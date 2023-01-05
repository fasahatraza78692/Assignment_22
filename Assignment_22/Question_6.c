#include<stdio.h>
int main()
{
	int n,*ar,i,max;
	printf("How many values you want to enter\n");
	scanf("%d",&n);
	ar=(int*)malloc(n*sizeof(int));
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	 scanf("%d",&ar[i]);
	max=ar[0];
	for(i=1;i<n;i++)
     {
       if(max<ar[i])
          max=ar[i];
     }
    printf("Largest = %d",max);
 return 0;
}
