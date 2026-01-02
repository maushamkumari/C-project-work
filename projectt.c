#include <stdio.h>
#include <math.h>

int main() {
    float principal, annualRate, monthlyRate;
    int years, months;
    float emi, totalPayment, totalInterest;

    // Input
    printf("Enter Loan Amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%f", &annualRate);

    printf("Enter Loan Tenure (in years): ");
    scanf("%d", &years);

    
    monthlyRate = annualRate / (12 * 100); // monthly interest rate
    months = years * 12;

    emi = (principal * monthlyRate * pow(1 + monthlyRate, months)) /
          (pow(1 + monthlyRate, months) - 1);

    totalPayment = emi * months;
    totalInterest = totalPayment - principal;

    // Output
    printf("\nMonthly EMI = %.2f", emi);
    printf("\nTotal Payment = %.2f", totalPayment);
    printf("\nTotal Interest = %.2f", totalInterest);

    return 0;
}
