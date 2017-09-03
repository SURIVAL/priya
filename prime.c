# priya
#include<stdio.h>
void main()
{
int n,i,flag=0;
printf("enter a postive interger:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n%i=0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%dis a prime number:",n);
else
printf("%D ISnot a prime number:",n);
}
