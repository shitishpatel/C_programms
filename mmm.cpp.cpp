#include<stdio.h>
#include<conio.h>
main()
{
int n[3][3],n1[3][3],n2[3][3],i,k,j;
clrscr();
printf("Enter the matrix .....\n");
for(i=1;i<=3;i++)
for(j=1;j<=3;j++)
{
n2[i][j]=0;
scanf("%d",&n[i][j]);
}
clrscr();
printf("the original matrix is=\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
printf("%d",n[i][j]);
printf("\n");
}
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
 n1[i][j]=n[j][i];
}

}

printf("Transpose of matrix is=\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf(" %d ",n1[i][j]);
}
printf("\n");
}
printf("Addition of transpose and original matrix is=\n");
for(i=1;i<=3;i++)
for(j=1;j<=3;j++)
n1[i][j]=n1[i][j]+n[i][j];

for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf(" %d ",n1[i][j]);
}
printf("\n");
}
printf("multiply of two matrix is(sum of matrix*original matrix)=\n");
for(i=1;i<=3;i++)
for(j=1;j<=3;j++)
for(k=1;k<=3;k++)
n2[i][j]=n2[i][j]+n[i][k]*n1[k][j];


for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf(" %d ",n2[i][j]);
}
printf("\n");
}
printf("identity matrix is..\n");
for(i=1;i<=3;i++)
for(j=1;j<=3;j++)
{
if(i==j)
n[i][j]=1;
else
n[i][j]=0;
}

//printf("--------------------\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf(" %d ",n[i][j]);
}
printf("\n");
}

printf("upper tringular matrix is..\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
if(i<=j)
printf("%d ",n1[i][j]);
else
{
n1[i][j]=0;
printf("%d ",n1[i][j]);
}
}
printf("\n");
}
/*printf("--------------------\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf(" %d ",n[i][j]);
}
printf("\n");
}
  */

getch();
}