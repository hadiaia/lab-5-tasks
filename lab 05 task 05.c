#include <stdio.h>
#include <stdlib.h>

int main() {
	int Lpoints;
	float disc;
	
	printf("Enter your loyalty points : ");
	scanf(" %d", &Lpoints );
	
	disc = (Lpoints > 2000) ? 0.20 : 0.05;
	
	printf("%.2f is your final discount percent", disc);
	
	
	
	return 0;
}
