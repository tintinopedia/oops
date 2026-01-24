/*
Ahaan is building 12 car in his factory.
Each car has:
	•	4 wheels
	•	1 engine
	•	Paint used = 1.5 litres per car
Write a C program to help Rohan calculate details about his toy cars.
Your program should do the following:
	1	Define variables:
	◦	A char variable to store the car model name (example: 'A')
	◦	An int variable for the number of cars
	◦	An int variable for wheels per car
	◦	A float variable for paint used per car
	2	Use operators to calculate:
	◦	➕ Total wheels needed (number of cars × wheels per car)
	◦	✖️ Total paint needed (number of cars × paint per car)
	◦	➖ Wheels left if Rohan has 50 wheels in total
	◦	➗A int variable to calculate the number of cars sold if he sells 50% of the cars he built.
	3	Print all results neatly on the screen.
*/

#include<stdio.h>

int main()
{
    int total_car = 12;
    char name[] = "Jeep Rubicon (Long Wheelbase)";
    int wheels_per_car = 4;
    float paint_per_car = 4;
    int tot_wheels = 50;

    int total_wheels_needed = total_car * wheels_per_car;
    float total_paint_needed = total_car * paint_per_car;
    int wheels_left = tot_wheels - (total_car * wheels_per_car);
    int sold_division = total_car / 2;

    printf("Total wheels needed are %d. \n", total_wheels_needed);
    printf("Total paint needed is %.1f. \n", total_paint_needed);
    printf("Wheels left are %d.\n", wheels_left);
    printf("Total cars sold are %d.\n", sold_division);

    return 0;
}
