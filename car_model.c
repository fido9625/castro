#include <stdio.h>
#include"car_model.h"
// Function to input car details into the array
void inputCarModels(struct CarModel carModels[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter details for Car %d:\n", i + 1);
        printf("Brand: ");
        scanf("%s", carModels[i].brand);
        printf("Model: ");
        scanf("%s", carModels[i].model);
        printf("Year: ");
        scanf("%d", &carModels[i].year);
    }
}

// Function to print all car models in the array
void printCarModels(struct CarModel carModels[], int count) {
    printf("\nCar Models:\n");
    for (int i = 0; i < count; i++) {
        printf("Car %d:\n", i + 1);
        printf("Brand: %s\n", carModels[i].brand);
        printf("Model: %s\n", carModels[i].model);
        printf("Year: %d\n", carModels[i].year);
    }
}
