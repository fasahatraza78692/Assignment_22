#include<stdio.h>
int *fun()
{
	int y=10;
	return &y;
}
int main()
{
	int *p=fun();   // here pointer point th location which is not exist now;
	printf("%d",*p);
	return 0;
}
