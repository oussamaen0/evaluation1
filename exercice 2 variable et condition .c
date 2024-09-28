#include <stdio.h>

int main() {
    float temp;
    printf("entre sa termperature corporelle : ");
    scanf("%f", &temp);
    
    if (37 <= temp && temp <= 37.5){
        printf("votre temperature est normale");}
        
        else if (temp > 37.5){
        printf("votre aver de la fivever");}
        
        else
        { printf("rah fik brd");}
        
      
    return 0;
}