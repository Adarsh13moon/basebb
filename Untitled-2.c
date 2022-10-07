
// WAP to implement FCFS Algorithm.
#include<stdio.h>


int main(){
    int processes[10], bt[10], at[10], ct[10], wt[10], tat[10], temp = 0, n;
    float totalWT = 0, totalTAT = 0; 
    // Getting all the required information for the FCFS Algorithm to execute. 
    printf("Enter the number of Processes: ");
    scanf("%d", &n);

    printf("Enter the process ID for %d Processes...\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &processes[i]);
    }

    printf("Enter the arrival time for %d Processes...\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &at[i]);
    }

    printf("Enter the burst time for %d Processes...\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &bt[i]);
    }
    // Sorting the Processes, burst time and arrival time according to the Arrival Time.
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++)
        {
            if (at[j] > at[j + 1])
            {
                temp = processes[j + 1];
                processes[j + 1] = processes[j];
                processes[j] = temp;
                temp = at[j + 1];
                at[j + 1] = at[j];
                at[j] = temp;
                temp = bt[j + 1];
                bt[j + 1] = bt[j];
                bt[j] = temp;
            }
        }
    }

    // Calculating the Completion Time.
    ct[0] = at[0] + bt[0];
    for (int i = 1; i < n; i++){
        ct[i] = ct[i - 1] + bt[i];
    }

    // Calculating Waiting Time and Turn Around Time.
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