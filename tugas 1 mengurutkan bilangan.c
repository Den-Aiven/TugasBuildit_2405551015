#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int jumlah;
   
    int temp = 0;
    scanf("%d", &jumlah);
    int nilai[jumlah];

    for(int i = 0; i < jumlah; i++){
        scanf("%d", &nilai[i]);
    }
    
    for(int i = 0; i < jumlah-1; i++){
        for(int j = 0; j<jumlah-i-1; j++){
            if(nilai[j+1] < nilai[j] ){
                temp = nilai[j+1];
                nilai[j+1] = nilai[j];
                nilai[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < jumlah; i++){
        printf("%d\n", nilai[i]);
        
    }
        
        
        
    return 0;
}