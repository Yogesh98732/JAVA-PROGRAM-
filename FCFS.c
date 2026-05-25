#include <stdio.h>

struct Process {
    int pid;
    int bt; 
    int wt;   
    int tat;  
};

int main() {
    int n, i;
    struct Process p[10];
    float tw=0,tat=0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        p[i].pid = i + 1;

        printf("Enter Burst Time for P%d: ", p[i].pid);
        scanf("%d", &p[i].bt);
    }

    
    p[0].wt = 0;

    
    for(i = 1; i < n; i++) {
        p[i].wt = p[i - 1].wt + p[i - 1].bt;
        tw = tw + p[i].wt; 
    }

   
    for(i = 0; i < n; i++) {
        p[i].tat = p[i].wt + p[i].bt;
        tat = tat + p[i].tat;
    }

   
    printf("\nPID\tBT\tWT\tTAT\n");

    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n",
               p[i].pid,
               p[i].bt,
               p[i].wt,
               p[i].tat);
    }
    float averagew = tw/n;
    float averagetat = tat/n;
    printf("Your average burst time : %f",averagew);
    printf("\nYour averagem trunaround time : %f",averagetat);

    return 0;
}