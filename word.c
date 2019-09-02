#include<stdio.h>
int main()
{
    char a[109];
    int sum=0,i,j,k,l,c;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>64&&a[i]<91)
            sum++;
    }
    c=l-sum;
    if(sum>c)
        puts(strupr(a));
    else
        puts(strlwr(a));
    return 0;
}