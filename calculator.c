#include <stdio.h>
#include <math.h>

int main(){
    int choice;
    float a, b, sum, difference, product, quotient, square, root, celsius, fahrenheit, kelvin, m, km, lb, kg;

    while (1) {
        printf("Select Operation:\n\n");
        printf("0. Exit Program\n\n");
        printf("Mathematic Operations:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Find the Square of a\n");
        printf("6. Find the Square Root of a\n\n");
        printf("Temperature Unit Conversions:\n");
        printf("7. Celsius to Fahrenheit\n");
        printf("8. Fahrenheit to Celsius\n");
        printf("9. Celsius to Kelvin\n");
        printf("10. Kelvin to Celsius\n");
        printf("11. Fahrenheit to Kelvin\n");
        printf("12. Kelvin to Fahrenheit\n\n");
        printf("Length Unit Conversions:\n");
        printf("13. Meters to Kilometer\n");
        printf("14. Kilometers to Meters\n\n");
        printf("Weight Unit Conversions\n");
        printf("15. Pounds to Kilograms\n");
        printf("16. Kilograms to Pounds\n");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting program...");
            break;
        }
        
        if (choice >= 1 && choice <= 4) {
            printf("Enter the value of a: \n");
            scanf("%f", &a);
            printf("Enter the value of b: \n");
            scanf("%f", &b);
        }

        if (choice == 1) {
            sum = a + b;
            printf("The Sum of a and b is %.2f\n\n", sum);
        }

        else if (choice == 2) {
            difference = a - b;
            printf("The Difference between a and b is %.2f\n\n", difference);
        }

        else if (choice == 3) {
            product = a * b;
            printf("The Product of a and b is %.2f\n\n", product);
        }

        else if (choice == 4) {
            if (b == 0) {
                printf("Error: Invalid Operation\n\n");
            }
            else {
            quotient = (float)a/b;

            printf("The Quotient when a is divided by b is %.2f\n\n", quotient);
            }
        }

        else if (choice == 5) {
            printf("Enter the value of a: \n");
            scanf("%f", &a);

            square = a * a;

            printf("The Square of a is %.2f\n\n", square);
        }

        else if (choice == 6) {
            printf("Enter the value of a: \n");
            scanf("%f", &a);

            if (a < 0) {
                printf("Error, Square Root of NEGATIVE number is not possible\n\n");
            }

            else {

            root = sqrt(a);

            printf("The Square Root of a is %.2f\n\n", root);
            }
        }

        else if (choice == 7) {
            printf("Enter the value of Celsius: \n");
            scanf("%f", &celsius);
            
            fahrenheit = celsius * (9.0/5.0) + 32;

            printf("The value of Fahrenheit is %.2f\n\n", fahrenheit);
        }

        else if (choice == 8) {
            printf("Enter the value of Fahrenheit: \n");
            scanf("%f", &fahrenheit);

            celsius = (fahrenheit - 32) * (5.0/9.0);

            printf("The value of Celsius is %.2f\n\n", celsius);
        }

        else if (choice == 9) {
            printf("Enter the value of Celsius: \n");
            scanf("%f", &celsius);
            
            kelvin = celsius + 273.15;

            printf("The value of Kelvin is %.2f\n\n", kelvin);
        }

        else if (choice == 10) {
            printf("Enter the value of Kelvin: \n");
            scanf("%f", &kelvin);

            celsius = kelvin - 273.15;

            printf("The value of Celsius is %.2f\n\n", celsius);
        }

        else if (choice == 11) {
            printf("Enter the value of Fahrenheit: \n");
            scanf("%f", &fahrenheit);

            kelvin = (fahrenheit - 32) * (5.0/9.0) + 273.15;

            printf("The value of Kelvin is %.2f\n\n", kelvin);
        }

        else if (choice == 12) {
            printf("Enter the value of Kelvin: \n");
            scanf("%f", &kelvin);
            
            fahrenheit = (kelvin - 273.15) * (9.0/5.0) + 32;

            printf("The value of Fahrenheit is %.2f\n\n", fahrenheit);
        }

        else if (choice == 13) {
            printf("Enter the value of Meters: \n");
            scanf("%f", &m);

            km = m/1000;

            printf("%.3f m = %.3f km\n\n", m, km);
        }

        else if (choice == 14) {
            printf("Enter the value of Kilometers: \n");
            scanf("%f", &km);

            m = km*1000;

            printf("%.3f km = %.3f m\n\n", km, m);
        }

        else if (choice == 15) {
        printf("Enter the value of Pound(s): \n");
        scanf("%f", &lb);

        kg = 0.4536 * lb;

        printf("%.4f lb = %.4f kg\n\n", lb, kg);
        }

        else if (choice == 16) {
        printf("Enter the value of Kilogram(s): \n");
        scanf("%f", &kg);

        lb = kg / 0.4536;

        printf("%.4f kg = %.4f lb\n\n", kg, lb);
        }

        else {
            printf("Invalid Choice!\n\n");
        }
    }
    return 0;
}
