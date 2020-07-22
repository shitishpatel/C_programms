#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i;
char c;
char s[10];
char a[100];
scanf("%c",&c);
scanf("%s",&s);
scanf("%[^\n]%*c",&a);
printf("%c\n",c);
printf("%s\n",s);
printf("%s",a);
return 0;
}
