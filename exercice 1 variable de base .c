
#include <stdio.h>

int main() {
    float base, hauteur;
    float aire, perimetre;
    	printf("entre la base : ");
    	scanf("%f", &base);
    	printf("entre la hauteur : ");
    	scanf("%f", &hauteur);
    	aire = (base * hauteur)/2;
    	perimetre = 3 * base;
    	printf("%.2f\n%.2f", aire ,perimetre);
    return 0;
}