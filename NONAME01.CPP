#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100];
clrscr();
printf("enter the string\n");
//scanf("%[\n]s",s);
gets(s);/*
printf("enter the character\n");
scanf("%c",&ch);
for(i=0;i<strlen(s);i++)
{
if(s[i]>='a'&&s[i]<='z')
count++;
}
		   */
printf("%s",s);
getch();
}