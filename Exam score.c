#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 50

  typedef struct {
    char name[50];
    int id;
    float exam1;
    float exam2;
    float project;
    float final_grade;
} student_t;

     int main() {
    student_t students[MAX_STUDENTS];

      int num_students = 0;

    // Get input from user
    printf("Enter the number of students in the class (max %d): ", MAX_STUDENTS);
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter ID of student %d: ", i+1);
        scanf("%d", &students[i].id);

        printf("Enter grade for exam 1 of student %d: ", i+1);
        scanf("%f", &students[i].exam1);

        printf("Enter grade for exam 2 of student %d: ", i+1);
        scanf("%f", &students[i].exam2);

        printf("Enter grade for final project of student %d: ", i+1);
        scanf("%f", &students[i].project);

        // Calculate final grade
        students[i].final_grade = 0.3 * students[i].exam1 * students[i].exam2 + 0.4 * students[i].project;
    }

    // Sort students by ID
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = i + 1; j < num_students; j++) {
            if (students[i].id > students[j].id) {
                // Swap students
                student_t temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Print report
    printf("\nFinal Grades:\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d %s: %.2f\n", students[i].id, students[i].name, students[i].final_grade);
    }

    return 0;
}
