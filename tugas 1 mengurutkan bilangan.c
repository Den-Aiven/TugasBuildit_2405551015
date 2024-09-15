#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlah;
    
    
    scanf("%d", &jumlah);
    
    
    int *nilai = (int *)malloc(jumlah * sizeof(int));
    
    if (nilai == NULL) {
        
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
   
    for (int i = 0; i < jumlah; i++) {
        scanf("%d", &nilai[i]);
    }
    
    
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (nilai[j + 1] < nilai[j]) {
                
                int temp = nilai[j + 1];
                nilai[j + 1] = nilai[j];
                nilai[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < jumlah; i++) {
        printf("%d\n", nilai[i]);
    }
    
    free(nilai);
    
    return 0;
}
