#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

void inputEmployeeDetails(struct Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Department: ");
        scanf(" %[^\n]", employees[i].department);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
}

void displayEmployeeDetails(struct Employee employees[], int n) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n", employees[i].salary);
    }
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];
    inputEmployeeDetails(employees, n);
    displayEmployeeDetails(employees, n);

    return 0;
}
