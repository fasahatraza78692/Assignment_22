#include<stdio.h>
int main()
{
	int n;
	char *str;
	printf("How many chatanters you want to enter\n");
	scanf("%d",&n);
	str=(char*)malloc((n+1)*sizeof(char));
	printf("Enter your string\n");
	fflush(stdin);
	fgets(str,n+1,stdin);
	printf("%s",str);
	return 0;
}
