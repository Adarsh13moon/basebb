#include<stdio.h>
int main()
{
    int n,temp,burst[11],arr[11],pro[11],comp[11],i,j;
    printf("\tEnter number of processes: ");
    scanf("%d",&n);

    printf("Enter process ID: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&pro[i]);
    }
    printf("Enter Burst Time: ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&burst[i]);
    }
    printf("Enter Arrival Time: ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
//sorting
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            temp=pro[j+1];
            pro[j+1]=pro[j];
            pro[j]=temp;
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            temp=burst[j+1];
            burst[j+1]=burst[j];
            burst[j]=temp;
        }
    }
    comp[0]=arr[0]+burst[0];
    printf("\nP ID\t A.T\t B.T\t C.T\t TAT\t W.T\n");
    for(int i = 0; i < n; i++){
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        totalTAT += tat[i];
        totalWT += wt[i];
    }
    totalTAT = totalTAT / n;
    totalWT = totalWT / n;
    for(int i = 0; i < n; i++){
        printf("\n%d \t %d\t %d\t %d\t %d\t %d\n", processes[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    printf("Average Turn Around Time is %f\n", totalTAT);
    printf("Average Waiting Time is %f\n", totalWT);

    return 0;
}