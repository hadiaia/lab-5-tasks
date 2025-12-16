#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int ride_req;
	float multiplier;
	
	printf("How many car rides were you requested : ");
	scanf(" %d", &ride_req);
	multiplier = sqrt(ride_req) / 2;
	
	if (multiplier > 3) {
		multiplier = 3;
	}
	printf("the final surge multiplier is : %.1f \n", multiplier);
	
	int distance;
	char ride_type;
	float base_fare, total_fare;
	
	printf("Enter the distance : ");
	scanf(" %d", &distance);
	printf("Enter the ride type (E/B/L): ");
	scanf(" %c", &ride_type);
	 
	switch (ride_type) {
		case 'E':
			base_fare = distance * 50;
			break;
		case 'B':
			base_fare = distance * 100;
			break;
		case 'L':
			base_fare = distance * 200;
			break;
		default:
			printf("invalid input");
	} 
	
	total_fare = base_fare * multiplier;
	
	printf("total fare is : %.1f", total_fare);
	return 0;
}
