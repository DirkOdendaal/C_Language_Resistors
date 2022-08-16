#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, ans = 0;
    float r;
    int resistors;
    int i;
    float resistors_array[] = {};

    float plusValues()
    {
        float plusValues = 0;
        int i;
        for (i = 1; i <= resistors; i++)
        {
            plusValues = plusValues + (v / resistors_array[i]);
        }
        return plusValues;
    }

    void intit()
    {
        printf("\nVoltage and resistance must be greater than zero.");
        for (i = 1; i <= resistors; i++)
        {
            printf("\nValue for Resistor %d (units: ohm): ", i);
            scanf("%f", &r);
            resistors_array[i] = r;
        }

        printf("\nValue for voltage source (units: V): ");
        scanf("%f", &v);

        for (i = 1; i <= resistors; i++)
        {
            if (resistors_array[i] <= 0 || v <= 0)
            {
                printf("\n");
                intit();
                break;
            }
            else
            {
                ans = plusValues();
                printf("For a parallel circuit the current is %.2f (units: mA)", ans);
                break;
            }
        }
    }

    printf("How many parrallel resistors do you have? ");
    scanf("%d", &resistors);
    intit();
}