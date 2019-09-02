#include<stdio.h>
 
int main()
{
	int a=0,t;
	char mg[100001][2];
	scanf("%d",&t);
	mg[t+1][1]='2';
	while(t){
		scanf("%s",mg[t]);
		if(mg[t][1]!=mg[t+1][1])
			a++;
		t--;
	}
	printf("%d\n",a);
}