#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define SUBJECTS 5

// Structure definition
struct Student {
    char name[50];            // Name of the student
    int Student_Id;          // Student ID
    int marks[SUBJECTS];     // Array to hold marks in 5 subjects
    float average_marks;      // Average marks
};

// Function to calculate the average marks
void calculate_average(struct Student *student) {
    int sum = 0;
    for (int i = 0; i < SUBJECTS; i++) {
        sum += student->marks[i]; // Sum up the marks
    }
    student->average_marks = (float)sum / SUBJECTS; // Calculate average
}

int main() {
    struct Student students[MAX_STUDENTS];
    int n; // Number of students

    // Input number of students
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    // Loop through to get details for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        // Input name
        printf("Name: ");
        getchar(); // Consume the newline character left by previous scanf
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Remove newline character

        // Input Student ID
        printf("Student ID: ");
        scanf("%d", &students[i].Student_Id);

        // Input marks for each subject
        printf("Enter marks for %d subjects:\n", SUBJECTS);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        // Calculate average marks
        calculate_average(&students[i]);
    }

    // Display results
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Student ID: %d\n", students[i].Student_Id);
        printf("Marks: ");
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\nAverage Marks: %.2f\n", students[i].average_marks);
    }

    return 0;
}
