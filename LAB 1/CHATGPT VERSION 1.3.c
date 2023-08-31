#include <stdio.h>

struct Employee {
    char name[100];
    char designation[100];
    double basicSalary;
    double hraPercentage;
    double daPercentage;
};

void calculateGrossSalary(struct Employee *emp) {
    emp->basicSalary += (emp->hraPercentage / 100.0) * emp->basicSalary + (emp->daPercentage / 100.0) * emp->basicSalary;
}

void displayEmployeeInfo(const struct Employee *emp) {
    printf("Name: %s\n", emp->name);
    printf("Designation: %s\n", emp->designation);
    printf("Gross Salary: %.2f\n", emp->basicSalary);
    
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name);
        printf("Designation: ");
        scanf(" %[^\n]s", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%lf", &employees[i].basicSalary);
        printf("HRA Percentage: ");
        scanf("%lf", &employees[i].hraPercentage);
        printf("DA Percentage: ");
        scanf("%lf", &employees[i].daPercentage);

        calculateGrossSalary(&employees[i]);
        
    }

    printf("Employee Information:\n");
    for (int i = 0; i < n; ++i) {
        displayEmployeeInfo(&employees[i]);
    }

    return 0;
}
