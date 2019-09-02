#include<stdio.h>
int main()
{
int n,a=0,d=0;
char c[100000];
scanf("%d%s",&n,c);
for(int i=0;i<n;i++)
{
if(c[i]=='A') a++;
else d++;
}
if(a>d) printf("Anton");
else if(a<d) 
printf("Danik");
else 
printf("Friendship");
}