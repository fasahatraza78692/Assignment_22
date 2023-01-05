#include<stdio.h>
int main()
{
	int *pi,num;
	printf("Enter a number\n");
	scanf("%d",&num);
	pi=(int*)malloc(sizeof(int));
	if(pi==NULL)
	 {
	 	printf("Storage full");
	 	exit(0);
	 }
	pi=num;  //here we have not free the memory of pi so memory leaked;
	return 0;
}
