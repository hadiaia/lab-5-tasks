#include <stdio.h>
#include <stdlib.h>

int main() {
	int rating, distance;
	
	printf("Enter the driver's rating (1-5): ");
	scanf(" %d", &rating);
	printf("Enter the distance : ");
	scanf(" %d", &distance);
	
	if (rating < 1 || rating > 5) {
		printf("Invalid input. try again.");
	} else{
	(rating >= 4 && distance <= 5) ? printf("Top driving nearby ") : (rating >= 3 && distance <= 10) ? printf("Average driver assigned") : printf("No suitable driver nearby");
}
	
	return 0;
}
