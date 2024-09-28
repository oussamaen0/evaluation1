#include <stdio.h>

int main()
{
    int size;
        printf("entre la taille de tablaux : ");
        scanf("%d", &size);
        float tab[size];
            float number;
            for(int i = 0; i < size; i++)
                {
                    printf("entre yourtemperature : ");
                    scanf("%f", &number);
                        tab[i] = number;
                }
                  float max;
                   max = tab[0];
            for(int i = 0; i < size; i++){
                if (tab[i]>max){
                max = tab[i];
                }
            }
            float min;
                   min = tab[0];
            for(int i = 0; i < size; i++){
                if (tab[i]<min){
                min = tab[i];
                }
            }
                        printf("la temperature max : %.2f ", max);
                         printf("la temperature max : %.2f ", min);

    return 0;
}