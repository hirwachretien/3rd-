#include<stdio.h>

struct employee {
    int id;
    char name[40];
    float weight;
    float height;
};

int main() 
{
    struct employee emp;
    
    printf("Enter the ID of the employee: ");
    scanf("%d", &emp.id);
    
    printf("Enter the name of the employee: ");
    scanf("%s", emp.name);  // This is correct; 'emp.name' is passed directly as a string.
    
    printf("Enter the height of the employee: ");
    scanf("%f", &emp.height);
    
    printf("Enter the weight of the employee: ");
    scanf("%f", &emp.weight);
    
    // Displaying the entered information
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);  // Again, emp.name is correct as it's passed directly as a string.
    printf("Height: %.2f\n", emp.height);
    printf("Weight: %.2f\n", emp.weight);
    
    return 0;
}
