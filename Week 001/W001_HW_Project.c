/*
Here is a fun, story-based question designed for a younger student (Class 3 level) who is learning C.

Question: The Lemonade Stand Adventure
You and your best friend decide to open a Lemonade Stand on a sunny day! You need to write a C program to calculate how much money you both take home.

The Story:

Define Variables:

Create a char variable to hold the size of the cup (use 'L' for Large).

Create an int variable for the number of cups you sold (you sold 4 cups).

Create a float variable for the price of one cup (each cup costs 5.5 rupees).

Do the Math:

Multiplication (*): Calculate the Total Sales (multiply cups by price).

Addition (+): A kind neighbor gave you a tip. Add 10.0 rupees to your Total Sales.

Subtraction (-): You had to buy lemons and sugar. Subtract 5.0 rupees from your total to pay for Supplies.

Division (/): You need to share the profit equally with your friend. Divide the final amount by 2.

Output: Print the share that each person gets!
*/

#include<stdio.h>

int main()
{
    char name[] = "L";
    int cup = 4;
    float price = 5.5;
    
    float total_sales = cup * price;

    float tip = 10;

    float total_amt = total_sales + tip;

    float amt_spent = 5;

    float rem_amt = total_amt - amt_spent;

    float split_amt = rem_amt / 2;

    printf("Each of us will get %.2f.\n", split_amt);

    return 0;
}