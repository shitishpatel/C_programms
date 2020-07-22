#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
        int a,b,r,sum=0,z,s=0,add=0,x,t=0,u;
        int l,g,h,i=0,m=0,n=0,o=0;
        scanf("%d",a);
        while(a!=0)
        {
        r=a%2;
        sum=sum*10+r;
        a=a/2;
        }
      /*  while(sum!=0)
        {
                z=sum%10;
                s=s*10+z;
                sum=sum/10;
        }
         while(b!=0)
        {
        u=b%2;
        add=add*10+u;
        b=b/2;
        }
        while(add!=0)
        {
                x=add%10;
                t=t*10+x;
                add=add/10;
        }*/
        /*
        l=t&s;
        g=t|s;
        h=t^s;
        while(l)
        {
                m=m+pow(2,i)*(l%10);
                l=l/10;
                i++;
        }
        printf("%d\n",m);
         while(g)
        {
                n=n+pow(2,i)*(g%10);
                g=g/10;
          i++;
        }
        printf("%d\n",n);
         while(h)
        {
                o=o+pow(2,i)*(h%10);
                h=h/10;
                i++;
        }
        printf("%d\n",o);
}
            
      printf("%d\n%d",s,t);
      return 0;
  }*/
  printf("%d",sum);
  return 0;
}
