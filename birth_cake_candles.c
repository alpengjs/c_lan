/*
Birthday Cake Candles
https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    int a = 0, max = 0, c = 0, d = 1; 
    
    max = ar[0];
    for (a = 1; a < n; a++) { 
        c = ar[a]; 
        if  (c == max) {
            d++;
            
        }
        if (c > max) {
            d = 1; 
            max = c; 
        }
        
    }
    
    return (d); 
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
