#include <stdio.h>

struct Employee {
    char name[50];
    float basicPay;
    float grossSalary;
};

int main() {
    int i;
    int totalEmployees = 10;
    struct Employee emp[10];
    float daRate = 0.52;

    printf("Enter details for %d employees:\n", totalEmployees);

    for (i = 0; i < totalEmployees; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);

        emp[i].grossSalary = emp[i].basicPay + (daRate * emp[i].basicPay);
    }

    printf("\nEmployee Gross Salaries:\n");
    printf("-------------------------\n");

    for (i = 0; i < totalEmployees; i++) {
        printf("Name: %-20s | Gross Salary: %.2f\n", emp[i].name, emp[i].grossSalary);
    }

    return 0;
}