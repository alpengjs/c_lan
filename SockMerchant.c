#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int sockMerchant(int n, int ar_size, int* ar) {
    // Complete this function
    int result = 0, i = 0, tmp = 0, tmp2 = 0; 

    qsort (ar, n, sizeof(*ar), comp); 
    
    for (i = 0; i < n; i++) {        
        tmp = *ar; 
        ar++; 
        tmp2 = *ar; 
        
        
        if (tmp == tmp2) { 
            result++; 
            ar++;
            i++;             
        } else {
            
        }
        
    }
    
    return result; 
}

int main() {
    int n, i = 0; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = 0; 
    
    
        result = sockMerchant(n, n, ar);
    
    printf("%d\n", result);
    return 0;
}
