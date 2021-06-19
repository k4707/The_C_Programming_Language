#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int FahrToCels(int fahr);

int main(){
    int fahr;
    fahr = LOWER;
    FahrToCels(fahr);
    
    return 0;
}

int FahrToCels(int fahr){
    int celsius;
    while (fahr <= UPPER) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    
}