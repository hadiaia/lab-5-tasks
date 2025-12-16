#include <stdio.h>
#include <math.h>

int main() {
    int ride_req, Lpoints, rating, distance, age;
    float balance, multiplier, disc, base_fare, total_fare;
    char ride_type;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    if (age < 21) {
        printf("Not elligible for ride (underage) \n");
    }
    if (balance < 200) {
        printf("Not elligble (insufficient funds) \n");
    }
    
    printf("Elligible for ride. \n\n");

    printf("How many car rides are requested in the area: ");
    scanf("%d", &ride_req);

    printf("Enter your loyalty points: ");
    scanf("%d", &Lpoints);

    printf("Enter the driver's rating (1-5): ");
    scanf("%d", &rating);

    printf("Enter the driver's distance from you (km): ");
    scanf("%d", &distance);

    printf("Enter the ride type (E/B/L): ");
    scanf(" %c", &ride_type);

    switch (ride_type) {
        case 'E':
            base_fare = distance * 50.0;
            break;
        case 'B':
            base_fare = distance * 100.0;
            break;
        case 'L':
            base_fare = distance * 200.0;
            break;
        default:
            printf("Invalid ride type. Exiting.\n");
    }

    multiplier = sqrt((float)ride_req) / 2.0;
    if (multiplier > 3) {
        multiplier = 3.0;
    }

    disc = (Lpoints > 2000) ? 0.20 : 0.05;

    total_fare = (base_fare * multiplier) * (1.0 - disc);

    printf("\n=======SUMMARY======= \n");

    (rating >= 4 && distance <= 5) ? printf("Top driver nearby \n") : (rating >= 3 && distance <= 10) ? printf("Average driver assigned \n") : printf("No suitable driver nearby \n");
    
    printf("The final surge multiplier is: %.1f \n", multiplier);
    printf("%.2f is your final discount percent \n", disc);
    printf("Total fare is: $%.2f\n", total_fare);

    return 0;
}
