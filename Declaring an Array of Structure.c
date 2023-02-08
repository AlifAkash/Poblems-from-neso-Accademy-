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

   struct car c[2];

   for(int i =0; i<2; i++){
    printf("Enter car %d fuel capacity: ", i+1);
    scanf("%d", &c[i].fuel_tank_cap);
    printf("Enter car %d seating capacity: ", i+1);
    scanf("%d", &c[i].seating_cap);
    printf("Enter car %d city mileage: ", i+1);
    scanf("%f", &c[i].city_mileage);
   }
   printf("\n");

   for(int i=0; i<2; i++){
    printf("Car %d fuel capacity is : %d\n", i+1, c[i].fuel_tank_cap);
    printf("Car %d seating capacity is : %d\n", i+1, c[i].seating_cap);
    printf("Car %d mileage is : %f\n", i+1, c[i].city_mileage);
    printf("\n");
   }

    return 0;
}
