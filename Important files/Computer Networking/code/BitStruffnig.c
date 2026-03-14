#include<stdio.h>
int main()
{   
    int n, m = 40;
    printf("ENter the size of input: ");
    scanf("%d", &n);
    int input[n];
    int bitstuff[30];
    printf("Enter the 20 bit message: ");
    for(int i=0;i<n;i++){
        scanf("%d", &input[i]);
    }
    printf("Bit Stuff code: ");
    int count =0, k=0;
    for(int i=0;i<n;i++){
        bitstuff[k++] = input[i]; 
        if(input[i] == 0) count =0;
        else{
            count++;
            if(count == 5){
                bitstuff[k++] = 0;
            }
        }
    }
    for(int i=0;i<k;i++){
        printf("%d", bitstuff[i]);
    }
    return 0;
}