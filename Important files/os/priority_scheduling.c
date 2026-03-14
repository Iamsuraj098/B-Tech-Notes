#include <stdio.h>
int maxindex(int pt[], int n)
{
    int i = 0, flag = 0;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((pt[i] > pt[j]) && (i != j))
                flag++;
        }
        if (flag == n-1)
            return i;
    }
    return i;
}
int main()
{
    int n, x = 0;
    printf("Enter the number of process:");
    scanf("%d", &n);
    char process[n];
    int at[n], bt[n], pt[n], ct[n], tat[n], wt[n], rt[n], cp[n], a, b, c;
    printf("Enter the Arival time:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &at[i]);
    }
    printf("Enter the Brust time:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    printf("Enter the priority time:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pt[i]);
        cp[i] = pt[i];
    }
    for (int i = 0; i < n; i++)
    {
        x = maxindex(bt, n);
        ct[x] = a+bt[x];
        a = ct[x];
        tat[x] = ct[x]-at[x];
        wt[x] = b-bt[x];
        b = tat[x];
        pt[x] = 565656;
    }
    printf("AT\tBT\tPT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d",at[i],bt[i],cp[i],ct[i], tat[i], wt[i]);
        printf("\n");
    }
    return 0;
}