#include<stdio.h>

main()
{
	char name[100] = "RED";
	int i;
	
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			printf("%c",name[i]+32);
		}
	
	}
}
