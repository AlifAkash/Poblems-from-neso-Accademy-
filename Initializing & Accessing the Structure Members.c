#include<stdio.h>
#include<stdlib.h>

struct car {
    char *engine;
    char *fuelType;
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main(){

    struct car c1 = {"DDis 190 engine", "diesel", 37, 5, 19.74};
    struct car c2 = {"Kappa", "patrol", 22, 8, 14.50};

    printf("Car 1 mileage: %f \t Car2 mileage: %f\n", c1.city_mileage, c2.city_mileage);

    return 0;
}
