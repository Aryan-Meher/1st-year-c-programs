//a program in C to calculate and print the electricity bill of a given customer
#include <stdio.h>

int main() {
    int customerID;
    char name[50];
    int units;
    float charge_per_unit, amount, surcharge = 0, total;

    // Input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Determine charge per unit
    if (units <= 100)
        charge_per_unit = 1.20;
    else if (units < 300)
        charge_per_unit = 1.50;
    else if (units < 600)
        charge_per_unit = 1.80;
    else
        charge_per_unit = 2.00;

    // Calculate amount
    amount = units * charge_per_unit;

    // Apply surcharge if bill > 400
    if (amount > 400)
        surcharge = amount * 0.15;

    total = amount + surcharge;

    // Minimum bill check
    if (total < 100)
        total = 100;

    // Output
    printf("\nElectricity Bill\n");
    printf("-----------------------------\n");
    printf("Customer IDNO        : %d\n", customerID);
    printf("Customer Name        : %s\n", name);
    printf("Units Consumed       : %d\n", units);
    printf("Amount Charges @Rs.%.2f per unit : %.2f\n", charge_per_unit, amount);
    printf("Surcharge Amount     : %.2f\n", surcharge);
    printf("Net Amount Paid By the Customer : %.2f\n", total);

    return 0;
}

