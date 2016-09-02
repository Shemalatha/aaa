#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,flag=0;
printf("enter the integer");
scang("%d,&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("prime num");
else
printf("not a prime num");
getch();
}

