#include<stdio.h>
int main(){
	int i,j,psr[30],b_t[30],at[30],ct[10],tat[30],wt[30],c=0,n;
	float avg_tat=0,avg_wt=0;
	printf("ENTER THE NO OF PROCESSOR:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("PROCESSOR #");
		scanf("%d",&psr[i]);
		printf("burst time \t");
		scanf("%d",&b_t[i]);
		printf("Arrival Time: \t");
		scanf("%d",&at[i]);
	}

	printf("\n\n");
	printf("\nPROCESSORS\t\t\tBURST TIME\t\t\tARRIVAL TIME");
	for(i=0;i<n;i++){
		printf("\nP%d\t\t\t\t%d\t\t\t\t\t%d",psr[i],b_t[i],at[i]);
	}
	int p;
	
	for(p=0;p<n;p++){
		for (j=0;j<n-1;j++){
			if (at[j]>at[j+1]){
			c=psr[j+1];
			psr[j+1]=psr[j];
			psr[j]=c;
			c=b_t[j+1];
			b_t[j+1]=b_t[j];
			b_t[j]=c;
			c=at[j+1];
			at[j+1]=at[j];
			at[j]=c;		
			}
			
		}
	}
	ct[0]=at[0]+b_t[0];
	for (i=1;i<n;i++){
		c=0;
		if (ct[i-1]<at[i]){
		c=at[i] - ct[i-1];		
        } 
        ct[i] = ct[i - 1] + b_t[i] + c; 
    }
	printf("\n\n\tGANTT CHART\n");
	printf("\n");
	printf("\nPROCESSORS\t| COMPLETION TIME");
	
	for(i=0;i<n;i++){
		printf("\n\tP%d\t| %d",psr[i],ct[i]);
	}
	for( i = 0; i < n; i++){
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - b_t[i];
        avg_tat += tat[i];
        avg_wt += wt[i];
    }
    avg_tat = avg_tat / n;
    avg_wt = avg_wt/ n;
    
	printf("\n\n");
	printf("\nPROCESSORS\tB_time\t\tA_TIME\t\tCOMPLETION\tTAT\tWT");
	for(i=0;i<n;i++){
		printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",psr[i],b_t[i],at[i],ct[i],tat[i],wt[i]);
	}	
	printf("\nAVERAGE TIME OF TURNAROUND TIME = %f",avg_tat);
	printf("\nAVERAGE TIME OF WAITING TIME = %f",avg_wt);
}