#include<stdio.h>
#include<conio.h>
void main()
 {
 int m,n,i,a[10];
 clrscr();
 printf("enter the no. of student");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 scanf("%d",&a[i]);
 if(a[i]%5<3)
 {
 m=a[i]/5;
 m++;
 a[i]=m*5;
 }else
 {}
 printf("%d",a[i]);
  }
getch();
}