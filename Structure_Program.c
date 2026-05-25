#include <stdio.h>


struct Student {
    int id;
    float marks[5];
    float total;
    float average;
};

int main() {
    int n, i, j;
    float classAverage = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter Student ID: ");
        scanf("%d", &s[i].id);

        s[i].total = 0;

        printf("Enter marks of 5 subjects:\n");

        for(j = 0; j < 5; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].average = s[i].total / 5.0;
        classAverage += s[i].average;
    }

   
    classAverage = classAverage / n;

  
    printf("\nSTUDENT MARKSHEET\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent ID: %d\n", s[i].id);

        for(j = 0; j < 5; j++) {
            printf("Subject %d Marks = %.2f\n", j + 1, s[i].marks[j]);
        }

        printf("Total Marks = %.2f\n", s[i].total);
        printf("Average Marks = %.2f\n", s[i].average);
    }

  
    printf("\nClass Average = %.2f\n", classAverage);

  
    printf("\nStudents scoring more than class average:\n");

    for(i = 0; i < n; i++) {
        if(s[i].average > classAverage) {
            printf("Student ID %d with Average %.2f\n",
                   s[i].id, s[i].average);
        }
    }

    return 0;
}