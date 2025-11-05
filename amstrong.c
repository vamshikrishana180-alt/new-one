#include<stdio.h>
int main(){
	int i,n1,n2;
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
	int temp=i,digit,sum=0;
		while(temp>0)
		{
			digit=temp%10;
			sum=sum+(digit*digit*digit);
			temp=temp/10;
		}
		if(sum==i){
			printf("%d\n",i);
		}
	}
return 0;
}

