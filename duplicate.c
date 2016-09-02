#include<stdio.h>
#include<conio.h>
void main()
{
char *removeDuplicate(char str[])
{
int i=0,j;
char ch;
printf("\nstr is %s",str);
while((ch=str[i++]!='\0')
{
j=i;
printf("ch=%c",ch);
if(ch==str[j])
{
printf("yes");
while(str[j]!='\0')
printf("%c",str[j]);
--i;
}
break;
}
printf("No");
j++;
}
}
return str;
}
