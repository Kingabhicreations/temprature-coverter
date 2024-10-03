#include <stdio.h>

int main() {
    int pt;
    float temp, converted_temp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &pt);

    printf("Enter the temperature: ");
    scanf("%f", &temp);

    switch (pt) {
    case 1:
        converted_temp = (temp * 9/5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n",temp,converted_temp);
            break;
        case 2:
            converted_temp = (temp - 32) * 5/9;
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temp, converted_temp);
            break;
        case 3:
            converted_temp = temp + 273.15;
            printf("%.2f Celsius is equal to %.2f Kelvin\n", temp, converted_temp);
            break;
        case 4:
            converted_temp = temp - 273.15;
            printf("%.2f Kelvin is equal to %.2f Celsius\n", temp, converted_temp);
            break;
        case 5:
            converted_temp = (temp - 32) * 5/9 + 273.15;
            printf("%.2f Fahrenheit is equal to %.2f Kelvin\n", temp, converted_temp);
            break;
        case 6:
            converted_temp = (temp - 273.15) * 9/5 + 32;
            printf("%.2f Kelvin is equal to %.2f Fahrenheit\n",temp,converted_temp);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}