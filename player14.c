#include <stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char a[20];
	scanf("%s",&a);
	strcat(a,".");
	printf("%s",a);
	getch();
}
