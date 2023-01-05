#include<stdio.h>
int main()
{
	int n,*ar,i,min,max;
	printf("How many values you want to enter\n");
	scanf("%d",&n);
	ar=(int*)malloc(n*sizeof(int));
	printf("Enter the values\n");
	for(i=0;i<n;i++)
	 scanf("%d",&ar[i]);
	min=ar[0];
	max=ar[0];
    for(i=1;i<n;i++)
     {
       if(max<ar[i])
         max=ar[i];
     }
    for(i=1;i<n;i++)
     {
       if(min>ar[i])
         min=ar[i];
     }
    printf("Minimum = %d\n",min);
    printf("Maximum = %d\n",max);
 return 0;
}
