 #include<stdio.h>
 #include<conio.h>
int main()
  {
  int i,n,j,add=0,sum=0,m,a[100];
  scanf("%d %d",&n,&m);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
      for(i=0;i<n;i++)
   	for(j=i+1;j<n;j++)
   	{
   if((a[i]+a[j])%m==0)
   add++;

}
   printf("%d",add);
return 0;
   }


