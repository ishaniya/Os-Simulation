#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{	

	int rt[20];
	int i, t[15],n;
	printf("Number of process: ");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=0;i<n;i++)
	{
		printf("Response time of P%d (in milliseconds): ",i);
		scanf("%d",&rt[i]);
		if(rt[i]<1000)
		{
			t[i]=1;
		}
		else
		{
			t[i]=0;
		}
	}
	printf("Process Number\tResponse Time\tPriority\t\tType");
	for(i=0;i<n;i++)
	{
		printf("\nP%d\t\t%dms\t\t",rt[i],i);
		if(t[i]==1)
		{
			printf("Interactive\tHigh");
		}
		else
		{
			printf("Non-Interactive\tLow");
		}
	}
	}
	
