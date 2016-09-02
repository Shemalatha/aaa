#include<stdio.h>
int main()
{
int n,reversedInteger=0,remainder,originalInteger;
scanf("%d",&n);
originalInteger=n;
while(n!=0)
{
remainder=n%10;
reverseInteger=reverseInteger+10+remainder;
n=n/10;
}
if(originalInteger==reverseInteger)
printf("palindrome");
else
printf("not palindrome");
getch();
}
