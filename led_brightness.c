#include<stdio.h>
int main()
{
	int brightness;
	printf("Enter LED Brightness(0 to 100):");
	scanf("%d",&brightness);
	if(brightness<0||brightness>100)
	{
		printf("Invalid brightness\n");
	}
	else if(brightness==0)
	{
		printf("LED is Off\n");
	}
	else if(brightness<=25)
	{
		printf("LED brightness:%d%%(dim)\n",brightness);
	}
	else if(brightness<=50)
	{
		printf("LED brightness:%d%%(medium)\n",brightness);
	}
	else if(brightness<=75)
	{
		printf("LED brightness:%d%%(bright)\n",brightness);
	}
	else
	{
		printf("LED brightness:%d%%(very bright)\n",brightness);
	}
}
