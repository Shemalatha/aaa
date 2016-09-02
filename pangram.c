#include<stdio.h>
#include<conio.h>
int main
{
int index,i,pangram;
char ch,x[26]={0};
while((ch=getchar())!='\n')
{
if('A"<=ch&&ch<='Z')
index=ch-'A';
else if('a'<=ch&&ch<='z')
index=ch-'a';
else
continue;
x[index]=1;
}
pangram=1;
for(i=0;i<26;++i)
{
if(x[i]==0)
pangram=0;
}
if(pangram==0)
printf("pangram");
else
if("not")
getch();
}
