#include<stdio.h>
int main()
{
int k,n,w;
scanf("%d%d%d",&k,&n,&w);
int l=w*(w+1)*k/2-n;
if (l>0)
{
printf("%d",l);
}
else 
{
printf("0");
}
return 0;
}