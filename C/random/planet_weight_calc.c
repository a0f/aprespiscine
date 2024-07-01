#include <stdio.h>

int main(void) {

int earth_weight;
int planet_num;

double planet_weight;

// declaration is NOT 0 indexed
double weight_table[7] = {0.38, 0.91, 0.38, 2.34, 1.06, 0.92, 1.19};

// Ask user for weight
printf("What is your weight in lbs. on planet Earth: ");

//Assign weight at address of var
scanf("%i", &earth_weight);

// Ask user for planet number
printf("What is the number of the planet you are fighting on: ");

//Store planet number
scanf("%i", &planet_num);

if ( planet_num < 1 || planet_num > 7){

    printf("Incorrect response. Planet numbers range from 1-7.\n What is the number of the planet you are fighting on: ");
    scanf("%i", &planet_num);
      
}

else {
    // Calculate weight
    planet_weight = earth_weight * weight_table[planet_num - 1];

    // Print weight
    printf("You are %f lbs. on planet number %i\n", planet_weight, planet_num);
}


return 0;

}
