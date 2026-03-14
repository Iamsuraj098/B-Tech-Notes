#include<stdio.h>
int main()
{   
    int n,x=0;
    printf("Enter the number of process:");
    scanf("%d", &n);
    char process[n];
    int at[n], bt[n], ct[n], tat[n], wt[n], rt[n];
    for (int i = 0; i < n; i++)
    {   
        printf("Enter the Arrival time: ");
        scanf("%d", &at[i]);
        printf("Enter the Brust time: ");
        scanf("%d", &bt[i]);
        ct[i] = bt[i] - at[i];
        x = ct[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }
    printf("CT\tTAT\tWT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d",ct[i],tat[i],wt[i]);
        printf("\n");
    }
    return 0;
}