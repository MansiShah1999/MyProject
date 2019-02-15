#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,i,temp,j;
	int arrival[10],bust[10],t[10],wait[10],g[10];
	float att=0,awt=0;
	int pn[10],temp1;
		    for(i=0;i<10;i++)
		    {
		                arrival[i]=0; 
		                bust[i]=0; 
		                wait[i]=0; 
		                g[i]=0;
		    }
	printf("Enter the number of process:");
	scanf("%d",&n);
	
	printf("\nEnter the process id:");
	for(i=0;i<n;i++)
		scanf("%d",&pn[i]);
		
	printf("\nEnter the burst times:");
	for(i=0;i<n;i++)
		scanf("%d",&bust[i]);
	
	printf("\nEnter the arrival times:");
	for(i=0;i<n;i++)
		scanf("%d",&arrival[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arrival[i]>arrival[j])
			{
				temp=arrival[i];
				arrival[i]=arrival[j];
				arrival[j]=temp;
				temp=bust[i];
				bust[i]=bust[j];
				bust[j]=temp;
				temp1=pn[i];
				pn[i]=pn[j];
				pn[j]=temp1;
			}
		}
	
	}
	g[0]=0;
	for(i=0;i<10;i++)
		g[i+1]=g[i]+bust[i];
	
	for(i=0;i<n;i++)
	{     
		wait[i]=g[i]-arrival[i];
		t[i]=g[i+1]-arrival[i];
		awt=awt+wait[i];
		att=att+t[i]; 
	}
	awt =awt/n;
	att=att/n;
	printf("\n\tprocess\twaiting time\tturn arround time\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",pn[i]);
		printf("\t\t%d",wait[i]);
		printf("\t\t%d",t[i]);
		printf("\n");
	}
	printf("the average waiting time is %f\n",awt);
	printf("the average turn around time is %f\n",att);

	return 0;
}
