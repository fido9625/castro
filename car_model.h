#ifndef CAR_MODEL_H
#define CAR_MODEL_H

struct CarModel {
    char brand[50];
    char model[50];
    int year;
};

void inputCarModels(struct CarModel carModels[], int count);
void printCarModels(struct CarModel carModels[], int count);

#endif  /* CAR_MODEL_H */
