#include <stdio.h>
#include <stddef.h>
#include "car_model.h"

int main() {
    int arraySize;
    printf("Enter the number of car models you want to input: ");
    scanf("%d", &arraySize);

    struct CarModel carModels[arraySize];

    // Populating the array
    inputCarModels(carModels, arraySize);

    // Printing the values
    printCarModels(carModels, arraySize);

    return 0;
}
