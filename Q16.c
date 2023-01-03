// Program to take price and quantity of items as an input and write c function to calculate sum of prices
// and write another c function to calculate the discount.

#include <stdio.h>

// Calculates the sum of the prices of the items
float calcTotal(int numItems, float prices[], int quantities[])
{
    float total = 0;
    for (int i = 0; i < numItems; i++)
    {
        total += prices[i] * quantities[i];
    }
    return total;
}

// Calculation of the discount according to the given rules
float calcDiscount(float total)
{
    if (total < 1000)
    {
        return total * 0.05;
    }
    else if (total < 5000)
    {
        return total * 0.1;
    }
    else
    {
        return total * 0.15;
    }
}

// Prints the individual item prices, total, discount and final price
void printInvoice(int numItems, float prices[], int quantities[])
{
    float total = calcTotal(numItems, prices, quantities);
    float discount = calcDiscount(total);
    float finalPrice = total - discount;

    printf("Item Prices:\n");
    for (int i = 0; i < numItems; i++)
    {
        printf("  Item %d: %.2f\n", i + 1, prices[i] * quantities[i]);
    }
    printf("Total Price of the Items: %.2f\n", total);
    printf("Discount of the Items: %.2f\n", discount);
    printf("Final Price of the Items: %.2f\n", finalPrice);
}

int main()
{
    float prices[] = {100, 20, 30};
    int quantities[] = {2, 3, 1};
    printInvoice(3, prices, quantities);
    return 0;
}
