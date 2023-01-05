#include<stdio.h>
char* varlenth_s(int ln)
{
	char *s;
	s=(char*)malloc(ln+1);
	return s;
}
int main()
{
	char *str;
	int ln;
	printf("Enter the lenght of string\n");
	scanf("%d",&ln);
	str=varlenth_s(ln);
	printf("Enter the string\n");
	fflush(stdin);
	fgets(str,ln+1,stdin);
	printf("%s",str);
	return 0;
}
