#include<stdio.h>
#include<conio.h>
void main()
 {
 int s,i,t,a,b,m,n,x[10],y[10],o,p,w=0,v=0;
 scanf("%d%d",&s,&t);
 scanf("%d%d",&a,&b);
 scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
scanf("%d",&x[i]);
o=a+x[i];
if(o>=s&&o<=t)
{
v++;
}
}
for(i=0;i<n;i++)
{
scanf("%d",&y[i]);
p=b+y[i];
if(p>=s&&p<=t)
w++;
}
printf("%d\n%d",v,w);

getch();
}