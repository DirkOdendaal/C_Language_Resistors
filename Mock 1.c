#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, r1, r2, ans;
    int resistors;

    void ask_questions()
    {
        printf("How many parrallel resistors do you have? ");
        scanf("%d", &resistors);
        printf("\nVoltage and resistance must be greater than zero.");
        printf("\nValue for Resistor 1 (units: ohm): ");
        scanf("%f", &r1);
        printf("\nValue for Resistor 2 (units: ohm): ");
        scanf("%f", &r2);
        printf("\nValue for voltage source (units: ohm): ");
        scanf("%f", &v);
    }

    while (1)
    {
        ask_questions();
        if (r1 > 0 && r2 > 0 && v > 0)
        {
            ans = v / ((r1 + r2) / ((r1 + r2)));
            printf("For a parallel circuit the current is %.2f (units: mA)", ans);
        }
        else
        {
            ask_questions();
        }
    }
}