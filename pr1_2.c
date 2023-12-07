#include <stdio.h>

int main() {
    float basicSalary, hraPercent, daPercent, taPercent;
    float hra, da, ta, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter percentage of House Rent Allowance (HRA): ");
    scanf("%f", &hraPercent);

    printf("Enter percentage of Dearness Allowance (DA): ");
    scanf("%f", &daPercent);

    printf("Enter percentage of Travel Allowance (TA): ");
    scanf("%f", &taPercent);

    hra = (hraPercent / 100.0) * basicSalary;
    da = (daPercent / 100.0) * basicSalary;
    ta = (taPercent / 100.0) * basicSalary;

    
    grossSalary = basicSalary + hra + da + ta;

    
    printf("\nBasic Salary: %.2f\n", basicSalary);
    printf("House Rent Allowance (HRA): %.2f\n", hra);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("Travel Allowance (TA): %.2f\n", ta);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
