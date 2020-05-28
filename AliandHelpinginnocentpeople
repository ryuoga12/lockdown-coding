#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>
int main()
{
char str[100000];
scanf("%s",&str);
int n = strlen(str);
bool status=true;
int t;
for(int i=0;i<n;i++)
{
if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='Y')
{
status = false;
}
if(str[i]-48 >=0 && str[i]-48 <=9)
{
if(i+1!=n && str[i+1]-48>=0 && str[i+1]-48<=9)
{
t = (str[i]-48)+(str[i+1]-48);
if(t%2!=0)
status = false;
}
}
}
if(status)
printf("valid");
else
printf("invalid");
}
